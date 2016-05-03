/**
TODO: partia z rozgrywanymi wszystkimi grami
sprawdzic dzia³anie gry
zapisywanie sredniej 
algorytm genetyczny
konstruktor kopiuj¹cy, przypisanie, mniejszoœæ
*/

#pragma once
#include "Wiezien.h"
#include "Gra.h"
#include <vector>
#include <fstream>
#include <cstddef>


class Gra
{
public:
	std::vector <Wiezien>tablica;
	std::vector <double>raport;
public:
	Gra() {
		tablica.reserve(liczbaGraczy);
		raport.reserve(liczbaGraczy);

	}
	int losowaPopulacja(){
		for (int i = 0; i < liczbaGraczy;i++)
		tablica.push_back(Wiezien());
		return 0;
	};
	int wczytajPopulacje(std::string a) {
		wczytajChromosomy(a);
		return 0;
	};
	~Gra() { 
		tablica.clear();
		raport.clear();
	};
	int rozegrajGre(Wiezien & ob1, Wiezien & ob2);
	int zapiszChromosomy();
	int wczytajChromosomy(std::string a);
	int start(Gra * wskaznik);
	int algorytmGenetyczny();
};

