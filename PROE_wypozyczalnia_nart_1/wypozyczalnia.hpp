#pragma once
#ifndef WYPOZYCZALNIA_HPP
#define WYPOZYCZALNIA_HPP
#ifdef _DEBUG
	#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
	#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "snowboard.hpp"
#include "kask.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class Wypozyczalnia
{
private:
	string adres;
	unsigned int pomieszczenia;
	static size_t ilosc_wypozyczalni;
	static size_t ilosc_nart;
	static size_t ilosc_snowboardow;
	static size_t ilosc_kaskow;
public:
	Wypozyczalnia();
	Wypozyczalnia(string, unsigned int);
	~Wypozyczalnia();
	void dodajNarty(string nazwa_s);
	void dodajSnowboard(string nazwa_s);
	void dodajKask(string nazwa_k);
	void dodajNarty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s);
	void wypiszNarty();
	void wypiszSnowboardy();
	void wypiszKaski();
	void wypiszWszystko();
	int liczbaNart();
	int liczbaSnowboardow();
	int liczbaKaskow();
	void usunNarte(string nazwa_n);
	void usunSnowboard(string nazwa_s);
	void usunKask(string nazwa_k);

	vector <Narty*> wszystkie_narty;
	vector <Snowboard*> wszystkie_snowboardy;
	vector <Kask*> wszystkie_kaski;
	static size_t zwrocIloscWypozyczalni(void);
	static size_t zwrocIloscNart(void);
	static size_t zwrocIloscSnowboardow(void);
	static size_t zwrocIloscKaskow(void);


};


#endif WYPOZYCZALNIA_HPP// _DEBUG

