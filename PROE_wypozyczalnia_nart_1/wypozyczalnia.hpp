#pragma once
#ifndef WYPOZYCZALNIA_HPP
#define WYPOZYCZALNIA_HPP
#ifdef _DEBUG
	#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
	#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "centrumnarciarskie.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>


using namespace std;


class Wypozyczalnia : public CentrumNarciarskie
{
private:
	///wektor przechowujacy znaczniki dla tworzonych obiektow
	vector <Narty*> wszystkie_narty;
	///wektor przechowujacy obiekty wczytane
	vector <Narty> zapisane_narty;
	Narty *narty;
	Narty nartyN;
	static size_t ilosc_wypozyczalni;
	static size_t ilosc_nartG;

public:
	///konstruktor domyslny klasy wypozyczalnia
	Wypozyczalnia();
	Wypozyczalnia(string, unsigned int);
	///konstruktor kopiujacy klasy wypoyczalnia
	Wypozyczalnia(const Wypozyczalnia &wypozyczalnia);
	~Wypozyczalnia();
	void zmienIloscPomieszczen(unsigned int iloscpomieszczen);
	void dodajNarty(string nazwa_s);
	void dodajNarty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s);
	void wypiszWszystko();
	void wypiszZapisane();
	void wypiszPlikowe();
	///funkcja wirtualna wypisujaca liczbe nart
	virtual int liczbaNart();
	void usunNarte(string nazwa_n);
	///funkcja zapisujaca utworzone obiekty do pliku tekstowego
	void zapisz(Wypozyczalnia &wypozyczalnia);
	///funkcja wczytujaca obiekty z pliku tekstowego
	void wczytaj(Wypozyczalnia &wypozyczalnia);
	 
	static size_t zwrocIloscWypozyczalni(void);
	static size_t zwrocIloscNart(void);

	void operator+(string nazwa_s);
    ///operator strumieniowy do zapisu obiektow
	friend ostream& operator << (ostream &w, Wypozyczalnia &wypozyczalnia);
	///operator strumieniowy do wczytywania obiektow
	friend istream& operator >> (istream &w, Wypozyczalnia &wypozyczalnia);
};


#endif WYPOZYCZALNIA_HPP// _DEBUG

