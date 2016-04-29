/**
TODO:
KONTENER NA WSZYTKICH GRACZY I Z TYM ZWIAZANE FUNKCJE
REPREZENTACJA WYNIKOW W FORMIE GRAFICZNEJ
GUI
*/

#pragma once
#ifndef stale


#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
//Globals:
#define REMIS_WSPOLPRACA 3
#define REMIS_ZDRADA 1
#define PRZEGRANA_WSPOLPRACA 5
#define WYGRANA_ZDRADA 0
#define ZDRADA true
#define WSPOLPRACA false

extern int pozycjaMut;
extern int szansaMut;
extern int szansaKrzyz;
extern int pozycjaKrzyz;
extern int liczbaGraczy;
extern int liczbaPokolen;
extern int liczbaPowtorzen;

#endif // !stale

class Wiezien
{
protected:
	double suma;
	int gracze;
	int counter;

public:
	bool chromosom[85];
	int ruch;
	double srednia;

	std::string zapisz();
	bool gra(Wiezien & obj,int tura, int r2);
	void krzyzowanie(Wiezien & obj);
	int mutacja();
	int wynik(int a);
	Wiezien() : suma(0), gracze(liczbaGraczy),ruch(0),srednia(0),counter(0) {

		for (int i = 0; i < 85; i++) {
			chromosom[i] = rand() % 2;
		}
	};
	Wiezien(bool *chrom) : suma(0), gracze(liczbaGraczy), ruch(0), srednia(0), counter(0) {
		for (int i = 0; i < 85; i++) {
			chromosom[i] = chrom[i];
		}
	}
	~Wiezien() {};
};
