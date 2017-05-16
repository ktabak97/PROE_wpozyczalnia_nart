#pragma once
#ifndef NARTY_HPP
#define NARTY_HPP
#ifdef _DEBUG
    #define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
    #define DEBUG_LOG(a)
#endif


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

enum class Poziom_n{Poczatkujacy, Sredni, Zaawansowany, Ekspert};
enum class Dostepnosc_n{Dostepne, Wypozyczone};


class Narty
{
private:
    string nazwa;
    unsigned int cena;
    unsigned int dlugosc;
    Poziom_n poziom;
	Dostepnosc_n dostepnosc;
    static size_t ilosc_nartG;

public:
	Narty();
    Narty(string);
    Narty(string, unsigned int, unsigned int, Poziom_n, Dostepnosc_n);
    Narty(const Narty &narty);
    ~Narty();

    string zwrocNazwa() const;
    unsigned int zwrocCena() const;
    unsigned int zwrocDlugosc() const;
    string zwrocPoziom(void) const;
    string zwrocDostepnosc(void) const;
	Poziom_n zwrocPoziomN(void) const;
	Dostepnosc_n zwrocDostepnoscN(void) const;

    void zmienNazwe(string n_nazwa);
    void zmienCene(unsigned int n_cena);
	void zmienWszystko(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s);
    static size_t zwrocIloscNart(void);
	void zapisz(Narty &nartyN);
	void wczytaj(Narty &nartyN);
	void wypiszNarty();
	
	void operator = (const Narty &narty);
    bool operator == (const Narty &narty);
    bool operator < (const Narty &narty);
    bool operator > (const Narty &narty);
	bool operator != (const Narty &narty);
	bool operator ^ (const Narty &narty);
	Narty operator + (const Narty &narty);
	//void operator[](int i);
	
	friend ostream& operator << (ostream& n, Narty &nartyN);
	friend istream& operator >> (istream& w, Narty &narty);
};

#endif NARTY_HPP// _DEBUG
