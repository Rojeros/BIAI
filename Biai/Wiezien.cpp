

#include "Wiezien.h"

std::string Wiezien::zapisz()
{
	std::string tekst="";
	
	for (int i = 0; i < 85; i++)
		tekst += std::to_string(this->chromosom[i]);
	tekst += " ";
	tekst += std::to_string(this->srednia);
	return tekst;
}

bool Wiezien::gra(Wiezien & obj, int tura,int r2)
{


	switch (tura) {
	case 0:
		return this->chromosom[0];

	case 1:
		if (this->chromosom[0] == 1)
			this->ruch += 1;	//01

		if (obj.chromosom[0] == 1)
			this->ruch += 2;	//10
		
		this->ruch += 1;

		return this->chromosom[ruch];
	
	case 2:
		if (this->chromosom[ruch] == 1)
			this->ruch += 4;	//100

		if (obj.chromosom[r2] == 1)
			this->ruch += 8;	//1000
		
		this->ruch += 4; //wyrownanie4 kombinacje
		return this->chromosom[ruch];
	case 3:

		if (this->chromosom[ruch] == 1)
			this->ruch += 16;	//01 00 00

		if (obj.chromosom[r2] == 1)
			this->ruch += 32;	//10 00 00

		this->ruch += 16; //wyrowanie 16 kombinacje
		return this->chromosom[ruch];
	}
		
	

	return false;
}

void Wiezien::krzyzowanie(Wiezien & obj)
{

	for (int i = 0; i < pozycjaKrzyz; i++)
		this->chromosom[i] = obj.chromosom[i];

	for (int i = pozycjaKrzyz; i < 85; i++)
		obj.chromosom[i] = this->chromosom[i];


}

int Wiezien::mutacja()
{
	if (rand() % szansaMut == 0) {
		chromosom[pozycjaMut] = !chromosom[pozycjaMut];
		return 1;
	}
	return 0;
}

int Wiezien::wynik(int a)
{
	this->suma += a;
	counter++;
	if ((counter % (4 * (liczbaGraczy-1))) == 0)
		srednia = (double)suma / (double)liczbaGraczy;
	return 0;
}
