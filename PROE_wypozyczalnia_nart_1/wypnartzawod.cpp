#include <iostream>
#include <string>
#include <fstream>
#include "wypnartzawod.hpp"

using namespace std;

string nazwaplikuZ = "wypozyczalnianartzawodniczych.txt";

WypozyczalniaNartZawodniczych::WypozyczalniaNartZawodniczych()
{
	typ_lokalu = "Wypozyczalnia nart zawodniczych";
	adres = "Zawodnicza";
	pomieszczenia = 1;
	ilosc_nartZ = 1;
	ilosc_komorek = 1;
	standardowykat = 87;

	nartyZ = new Narty("Head RD");
	wszystkie_nartyZ.push_back(nartyZ);


	DEBUG_LOG("WypozyczalniaNartZawodniczych - konstruktor domyslny");
}

WypozyczalniaNartZawodniczych::~WypozyczalniaNartZawodniczych()
{
	delete nartyZ;
	DEBUG_LOG("WypozyczalniaNartZawodniczych - destruktor");
}

void WypozyczalniaNartZawodniczych::dodajNarty(string nazwa_s)
{
	Narty *nartyZ = new Narty(nazwa_s);
	wszystkie_nartyZ.push_back(nartyZ);
	cout << "Dodalem narte: " << nazwa_s << endl;

	++ilosc_nartZ;
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

void WypozyczalniaNartZawodniczych::wypiszZapisane()
{
	cout << endl;
	cout << "Typ lokalu: " << typ_lokalu << endl;
	cout << "Adres lokalu: " << adres << endl;
	cout << "Ilosc pomieszczen: " << pomieszczenia << endl;
	cout << "Ilosc nart komorkowych w magazynie: " << ilosc_komorek << endl;
	cout << "Standardowy kat ostrzenia nart: " << standardowykat << endl << endl;

	cout << "LISTA WSZYSTKICH SPRZETOW Z PARAMETRAMI" << endl << endl;
	cout << "NARTY:" << endl << endl;
	int ln = ilosc_nartZ;
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << zapisane_nartyZ.at(i).zwrocNazwa() << endl;
		cout << "Cena:" << zapisane_nartyZ.at(i).zwrocCena() << endl;
		cout << "Dlugosc:" << zapisane_nartyZ.at(i).zwrocDlugosc() << endl;
		cout << "Poziom:" << zapisane_nartyZ.at(i).zwrocPoziom() << endl;
		cout << "Dostepnosc:" << zapisane_nartyZ.at(i).zwrocDostepnosc(); cout << endl << endl;
	}
}

int WypozyczalniaNartZawodniczych::liczbaNart()
{
	int l_nart = wszystkie_nartyZ.size();
	return l_nart;
}

void WypozyczalniaNartZawodniczych::zapisz(WypozyczalniaNartZawodniczych &wypozyczalniaZ)
{
	ofstream plik(nazwaplikuZ);
	plik << wypozyczalniaZ;
	plik.close();
	//	wypozyczalnia.nartyN.zapisz(wypozyczalnia.nartyN);

	DEBUG_LOG("WypozyczalniaNartZawodniczych - zapisano do pliku");
}

void WypozyczalniaNartZawodniczych::wczytaj(WypozyczalniaNartZawodniczych &wypozyczalniaZ)
{
	ifstream plik(nazwaplikuZ);
	plik >> wypozyczalniaZ;
	plik.close();
	//	wypozyczalnia.nartyN.wczytaj(wypozyczalnia.nartyN);

	DEBUG_LOG("WypozyczalniaNartZawodniczych - wczytano z pliku");
}

ostream & operator << (ostream &w, WypozyczalniaNartZawodniczych &wypozyczalniaZ)
{
	w << wypozyczalniaZ.typ_lokalu << " " << wypozyczalniaZ.adres << " " <<
		wypozyczalniaZ.pomieszczenia << " " << wypozyczalniaZ.ilosc_nartZ << " ";

	for (int i = 0; i < wypozyczalniaZ.ilosc_nartZ; i++)
	{
		w << wypozyczalniaZ.wszystkie_nartyZ.at(i)->zwrocNazwa() << " " << wypozyczalniaZ.wszystkie_nartyZ.at(i)->zwrocCena() << " " << wypozyczalniaZ.wszystkie_nartyZ.at(i)->zwrocDlugosc() << " " <<
			wypozyczalniaZ.wszystkie_nartyZ.at(i)->zwrocPoziom() << " " << wypozyczalniaZ.wszystkie_nartyZ.at(i)->zwrocDostepnosc() << endl;
	}

	return w;
}

istream & operator >> (istream &w, WypozyczalniaNartZawodniczych &wypozyczalniaZ)
{
	w >> wypozyczalniaZ.typ_lokalu;
	w >> wypozyczalniaZ.adres;
	w >> wypozyczalniaZ.pomieszczenia;
	w >> wypozyczalniaZ.ilosc_nartZ;

	wypozyczalniaZ.zapisane_nartyZ.clear();
	Narty nartyF;

	for (int i = 0; i < wypozyczalniaZ.ilosc_nartZ; i++)
	{
		w >> nartyF;
		wypozyczalniaZ.zapisane_nartyZ.push_back(nartyF);
	}
	return w;

}
