#pragma once
#ifndef SNOWBOARD_HPP
#define SNOWBOARD_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif


#include <iostream>
#include <string>

using namespace std;

enum class Poziom_s { Poczatkujacy, Sredni, Zaawansowany, Ekspert };
enum class Dostepnosc_s { Dostepny, Wypozyczony };


class Snowboard
{
private:
	string nazwa;
	unsigned int cena;
	unsigned int dlugosc;
	Poziom_s poziom;
	Dostepnosc_s dostepnosc;
	static size_t ilosc_snowboardow;

public:
	Snowboard();
	Snowboard(string);
	Snowboard(string, unsigned int, unsigned int, Poziom_s, Dostepnosc_s);
	Snowboard(const Snowboard &snowboard);
	~Snowboard();

	string zwrocNazwa();
	unsigned int zwrocCena();
	unsigned int zwrocDlugosc();
	string zwrocPoziom(void);
	string zwrocDostepnosc(void);
	Poziom_s zwrocPoziomN(void) const;
	Dostepnosc_s zwrocDostepnoscN(void) const;

	void zmienNazwe(string s_nazwa);
	void zmienCene(unsigned int s_cena);
	static size_t zwrocIloscSnowboardow(void);

	bool operator == (const Snowboard &snowboard);
	bool operator << (const Snowboard &snowboard);
	bool operator >> (const Snowboard &snowboard);
	void operator= (const Snowboard &snowboard);
};

#endif SNOWBOARD_HPP// _DEBUG

