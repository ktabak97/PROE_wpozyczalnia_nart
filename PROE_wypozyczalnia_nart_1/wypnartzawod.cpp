#include <iostream>
#include <string>
#include <fstream>
#include "wypnartzawod.hpp"

using namespace std;

string nazwa_plikuD = "dzialnarciarski.txt";

WypozyczalniaNartZawodniczych::WypozyczalniaNartZawodniczych()
{
	typ_lokalu = "Wypozyczalnia nart zawodniczych";
	adres = "Zawodnicza";
	pomieszczenia = 1;
	ilosc_komorek = 1;
	standardowykat = 87;

	nartyZ = new Narty("Head RD");
	wszystkie_nartyZ.push_back(nartyZ);


	DEBUG_LOG("WypozyczalniaNartZawodniczych - konstruktor domyslny");
}

WypozyczalniaNartZawodniczych::~WypozyczalniaNartZawodniczych()
{
	DEBUG_LOG("WypozyczalniaNartZawodniczych - destruktor");
}

void WypozyczalniaNartZawodniczych::dodajNarty(string nazwa_s)
{
	Narty *nartyZ = new Narty(nazwa_s);
	wszystkie_nartyZ.push_back(nartyZ);
	cout << "Dodalem narte: " << nazwa_s << endl;

}

void WypozyczalniaNartZawodniczych::wypiszWszystko()
{
	cout << endl;
	cout << "Typ lokalu: " << typ_lokalu << endl;
	cout << "Adres lokalu: " << adres << endl;
	cout << "Ilosc pomieszczen: " << pomieszczenia << endl;
	cout << "Ilosc nart komorkowych w magazynie: " << ilosc_komorek << endl;
	cout << "Standardowy kat ostrzenia nart: " << standardowykat << endl << endl;

	cout << "LISTA WSZYSTKICH SPRZETOW Z PARAMETRAMI" << endl << endl;
	cout << "NARTY:" << endl << endl;
	int ln = liczbaNart();
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_nartyZ.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_nartyZ.at(i)->zwrocCena() << endl;
		cout << "Dlugosc:" << wszystkie_nartyZ.at(i)->zwrocDlugosc() << endl;
		cout << "Poziom:" << wszystkie_nartyZ.at(i)->zwrocPoziom() << endl;
		cout << "Dostepnosc:" << wszystkie_nartyZ.at(i)->zwrocDostepnosc(); cout << endl << endl;
	}
}


int WypozyczalniaNartZawodniczych::liczbaNart()
{
	int l_nart = wszystkie_nartyZ.size();
	return l_nart;
}