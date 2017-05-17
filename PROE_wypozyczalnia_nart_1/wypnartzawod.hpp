#pragma once
#ifndef WYPNARTZAWOD_HPP
#define WYPNARTZAWOD_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "wypozyczalnia.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;

enum class Komorki { Dostepne, OstatnieSztuki, Wypozyczone };

class WypozyczalniaNartZawodniczych : public Wypozyczalnia
{
private:
	Komorki komorki;
	vector <Narty*> wszystkie_nartyZ;
	vector <Narty> zapisane_nartyZ;
	Narty *nartyZ;
	int standardowykat;
	int ilosc_komorek;
	int ilosc_nartZ;
public:
	WypozyczalniaNartZawodniczych();
	~WypozyczalniaNartZawodniczych();

	void dodajNarty(string nazwa_s);
	void wypiszWszystko();	
	void wypiszZapisane();
	int liczbaNart();
	///funkcja sluzaca do zapisu Wypozyczalni nart zawodniczych
	void zapisz(WypozyczalniaNartZawodniczych &wypozyczalniaZ);
	///funkcja sluzaca do wczytywania Wypozyczalni nart zawodniczych
	void wczytaj(WypozyczalniaNartZawodniczych &wypozyczalniaZ);
	///operator strumieniowy do zapisu
	friend ostream& operator << (ostream &w, WypozyczalniaNartZawodniczych &wypozyczalniaZ);
	///operator strumieniowy do wczytywania
	friend istream& operator >> (istream &w, WypozyczalniaNartZawodniczych &wypozyczalniaZ);
};


#endif WYPNARTZAWOD_HPP// _DEBUG