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
#include <iomanip>
#include <string>
#include <vector>


using namespace std;


class Wypozyczalnia
{
private:
	string adres;
	unsigned int pomieszczenia;
	Narty *narty;
	Snowboard *snowboard;
	Kask *kask;
	int ilosc_nart;
	int ilosc_snowboardow;
	int ilosc_kaskow;
	vector <Narty*> wszystkie_narty;
	vector <Snowboard*> wszystkie_snowboardy;
	vector <Kask*> wszystkie_kaski;
	
	static size_t ilosc_wypozyczalni;
	static size_t ilosc_nartG;
	static size_t ilosc_snowboardowG;
	static size_t ilosc_kaskowG;
public:
	Wypozyczalnia();
	Wypozyczalnia(string, unsigned int);
	Wypozyczalnia(const Wypozyczalnia &wypozyczalnia);
	~Wypozyczalnia();
	void dodajNarty(string nazwa_s);
	void dodajSnowboard(string nazwa_s);
	void dodajKask(string nazwa_k);
	void dodajNarty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s);
	void dodajSnowboard(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_s poziom_s, Dostepnosc_s dostepnosc_s);
	void dodajKask(string nazwa_k, unsigned int cena_k, unsigned int srednica_k, Kolor_k poziom_k);
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
	static size_t zwrocIloscWypozyczalni(void);
	static size_t zwrocIloscNart(void);
	static size_t zwrocIloscSnowboardow(void);
	static size_t zwrocIloscKaskow(void);

	void operator+(string nazwa_s);
};


#endif WYPOZYCZALNIA_HPP// _DEBUG

