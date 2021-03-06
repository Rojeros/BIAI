#include "Gra.h"
#include <cstddef>


int Gra::rozegrajGre(Wiezien & ob1, Wiezien & ob2)
{
	int r1, r2;
	bool wyn1, wyn2;

	for (int i = 0; i < 4; i++) {
		r1 = ob1.ruch;		//potrzeba licznika ruchu dla aktualnej tury przeciwnika
		r2 = ob2.ruch;
		wyn1 = ob1.gra(ob2, i, r2);
		wyn2 = ob2.gra(ob1, i, r1);

		if ((wyn1 == wyn2) && (wyn1 == ZDRADA)) {
			ob1.wynik(REMIS_ZDRADA);
			ob2.wynik(REMIS_ZDRADA);
		}
		else {
			if ((wyn1 == wyn2) && (wyn1 == WSPOLPRACA)) {
				ob1.wynik(REMIS_WSPOLPRACA);
				ob2.wynik(REMIS_WSPOLPRACA);
			}
			else {
				if ((wyn1 == ZDRADA) && (wyn2 == WSPOLPRACA)) {
					ob1.wynik(WYGRANA_ZDRADA);
					ob2.wynik(PRZEGRANA_WSPOLPRACA);
				}
				else {
					if ((wyn2 == ZDRADA) && (wyn1 == WSPOLPRACA)) {
						ob2.wynik(WYGRANA_ZDRADA);
						ob1.wynik(PRZEGRANA_WSPOLPRACA);
					}

				}
			}
		}
	}
	ob1.ruch = 0;
	ob2.ruch = 0;
	return 0;
}

int Gra::zapiszChromosomy()
{
	int j = 0;
	std::string sciezka = "chromosom.txt";
	std::ofstream plik;
	std::fstream plik2;
	plik2.open(sciezka, std::ios::in | std::ios::_Nocreate);
	do {
		plik2.close();

		sciezka = "chromosom";
		sciezka += std::to_string(j);
		sciezka += ".txt";
		plik2.open(sciezka, std::ios::in | std::ios::_Nocreate);
		j++;

	} while ((plik2.is_open() == true) && (j < 200));
	plik2.close();

	plik.open(sciezka);
	if (plik.good() != true) {
		return 4;
	}

	plik << std::to_string(liczbaGraczy) << "\n";

	for (int i = 0; i < liczbaGraczy; i++) {
		plik << tablica[i].zapisz() << "\n";

	}
	plik.close();

	return 0;
}

int Gra::wczytajChromosomy(std::string sciezka)
{
	bool tmp[85];
	int sprw = 0;
	std::fstream plik;
	plik.open(sciezka, std::ios::in | std::ios::out);
	if (plik.good() == true) {
		tablica.clear();
		std::string napis;
		getline(plik, napis);
		liczbaGraczy = atoi(napis.c_str());
		if (liczbaGraczy <= 0) {
			plik.close();
			return -1;
		}
		getline(plik, napis);

		while (!plik.eof()) {


			for (int i = 0; i < napis.length(); i++) {
				if (i >= 0 && i < 85) {
					if (napis[i] == '1') {
						tmp[i] = 1;
					}
					else
						if (napis[i] == '0') {
							tmp[i] = 0;
						}
						else {
							plik.close();
							return -3;
						}
				}
			}

			tablica.push_back(Wiezien(tmp));
			sprw++;
			getline(plik, napis);

		}

		plik.close();
		if (sprw == liczbaGraczy)
			return 0;
		else return -2;

	}
	else {
		return 1;
	}

	return 0;
}

int Gra::start(Gra * wskaznik)
{


	for (int i = 0; i < liczbaGraczy; i++) {
		this->tablica[i] = wskaznik->tablica[i];
	}

	for (int i = 0; i < liczbaPokolen; i++) {
		for (int i = 0; i < liczbaGraczy - 1; i++) {
			for (int j = i + 1; j < liczbaGraczy; j++) {

				this->rozegrajGre(this->tablica[i], this->tablica[j]);

			}
		}

		//sortowanie
		std::sort(this->tablica.begin(), this->tablica.begin() + liczbaGraczy);

		this->algorytmGenetyczny();

		this->raport.push_back(this->tablica[0].srednia);
		for (int i = 0; i < liczbaGraczy; i++) {
			this->tablica[i].counter = 0;
			this->tablica[i].ruch = 0;
			//this->tablica[i].srednia = 0;
			this->tablica[i].suma = 0;
		}



	}
	for (int i = 0; i < liczbaGraczy - 1; i++) {
		for (int j = i + 1; j < liczbaGraczy; j++) {

			this->rozegrajGre(this->tablica[i], this->tablica[j]);

		}
	}

	//sortowanie
	std::sort(this->tablica.begin(), this->tablica.begin() + liczbaGraczy);
	this->raport.push_back(this->tablica[0].srednia);


	this->zapiszChromosomy();

	return 0;
}

int Gra::algorytmGenetyczny()
{

	if (cross50 == true) {

		int srodek = int(liczbaGraczy / 2);
		for (int i = 0; i < srodek; i++) {
			tablica[i].krzyzowanie(&(tablica[i + 1]));
			i++;

		}

	}
	if (cross33 == true) {
		int srodek = int(liczbaGraczy / 3);

		for (int i = 0; i < srodek; i++) {
			tablica[i].krzyzowanie(&(tablica[i + 1]));
			i++;
		}
		for (int i = 0; i < (srodek - i); i++) {
			tablica[(srodek - i)].krzyzowanie(&(tablica[i]));

		}
		srodek *= 2;
		for (int i = srodek / 2; i < srodek; i++) {
			tablica[i].krzyzowanie(&(tablica[i + 1]));
			i++;

		}



	}
	if (crossR == true) {

		int krzyz1;
		int krzyz2;
		for (int i = 0; i < liczbaGraczy; i++) {
			if (rand() % szansaKrzyz == 0) {
				krzyz1 = (rand() % liczbaGraczy);
				krzyz2 = (rand() % liczbaGraczy);
				if (krzyz1 != krzyz2)
					tablica[krzyz1].krzyzowanie(&(tablica[krzyz2]));

			}

		}

	}

	for (int i = 0; i < liczbaGraczy; i++)
		tablica[i].mutacja();

	return 0;
}

