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
#include <vector>


using namespace std;


class Wypozyczalnia : public CentrumNarciarskie
{
private:
	Narty *narty;
	int ilosc_nart;
	vector <Narty*> wszystkie_narty;
	static size_t ilosc_wypozyczalni;
	static size_t ilosc_nartG;

public:
	Wypozyczalnia();
	Wypozyczalnia(string, unsigned int);
	Wypozyczalnia(const Wypozyczalnia &wypozyczalnia);
	~Wypozyczalnia();
	void zmienIloscPomieszczen(unsigned int iloscpomieszczen);
	void dodajNarty(string nazwa_s);
	void dodajNarty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s);
	void wypiszWszystko();
	int liczbaNart();
	void usunNarte(string nazwa_n);
	static size_t zwrocIloscWypozyczalni(void);
	static size_t zwrocIloscNart(void);

	void operator+(string nazwa_s);
};


#endif WYPOZYCZALNIA_HPP// _DEBUG

