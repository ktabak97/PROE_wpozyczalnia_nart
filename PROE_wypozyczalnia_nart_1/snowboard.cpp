using namespace std;

#include "snowboard.hpp"
#include <iostream>
//#include <string>

size_t Snowboard::ilosc_snowboardow = 0;

Snowboard::Snowboard()
{
	nazwa = "snowboard_podstawowy";
	cena = 35; //za dzien
	dlugosc = 155;
	poziom = Poziom_s::Sredni;
	dostepnosc = Dostepnosc_s::Dostepny;

	++ilosc_snowboardow;
	DEBUG_LOG("Snowboard - konstruktor domyslny");
};

Snowboard::Snowboard(string nazwa_s)
{
	nazwa = nazwa_s;
	cena = 35; //za dzien
	dlugosc = 155;
	poziom = Poziom_s::Sredni;
	dostepnosc = Dostepnosc_s::Dostepny;

	++ilosc_snowboardow;
	DEBUG_LOG("Snowboard - konstruktor z nazwa");
};

Snowboard::Snowboard(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_s poziom_s, Dostepnosc_s dostepnosc_s)
{
	nazwa = nazwa_s;
	cena = cena_s; //za dzien
	dlugosc = dlugosc_s;
	poziom = poziom_s;
	dostepnosc = dostepnosc_s;

	++ilosc_snowboardow;
	DEBUG_LOG("Snowboard - konstruktor z parametrami");
};


Snowboard::Snowboard(const Snowboard &snowboard)
{
	nazwa = snowboard.nazwa;
	cena = snowboard.cena; //za dzien
	dlugosc = snowboard.dlugosc;
	poziom = snowboard.poziom;
	dostepnosc = snowboard.dostepnosc;

	++ilosc_snowboardow;
	DEBUG_LOG("Snowboard - konstruktor kopiujacy");
};


Snowboard::~Snowboard()
{
	--ilosc_snowboardow;
	DEBUG_LOG("Snowboard - destruktor");
}

/////////////////////////////////////////////////////////////////////funkcje

string Snowboard::zwrocNazwa()
{
	return nazwa;
}
unsigned int Snowboard::zwrocCena()
{
	return cena;
}
unsigned int Snowboard::zwrocDlugosc()
{
	return dlugosc;
}
string Snowboard::zwrocPoziom(void)
{
	if (poziom == Poziom_s::Poczatkujacy)
		return "Poczatkujacy";
	else if (poziom == Poziom_s::Sredni)
		return "Sredni";
	else if (poziom == Poziom_s::Zaawansowany)
		return "Zaawansowany";
	else
		return "Ekspert";
}
Poziom_s Snowboard::zwrocPoziomN(void) const
{
	return poziom;
}
string Snowboard::zwrocDostepnosc(void)
{
	if (dostepnosc == Dostepnosc_s::Dostepny)
		return "Dostepny";
	else
		return "Wypozyczone";
}
Dostepnosc_s Snowboard::zwrocDostepnoscN(void) const
{
	return dostepnosc;
}

void Snowboard::zmienNazwe(string s_nazwa)
{
	nazwa = s_nazwa;
}
void Snowboard::zmienCene(unsigned int s_cena)
{
	cena = s_cena;
}

size_t Snowboard::zwrocIloscSnowboardow(void)
{
	return ilosc_snowboardow;
}


/////////////////////////////////////////////////////////////////////operatory

void Snowboard::operator= (const Snowboard &snowboard)
{
	cout << snowboard.nazwa << endl;
	nazwa = snowboard.nazwa;
	cena = snowboard.cena; //za dzien
	dlugosc = snowboard.dlugosc;
	poziom = snowboard.poziom;
	dostepnosc = snowboard.dostepnosc;

	DEBUG_LOG("Snowboard - kopiowanie");
}


//porownanie dwoch sprzetow
bool Snowboard::operator == (const Snowboard &snowboard)
{
	if (cena != snowboard.cena)
		return false;
	if (dlugosc != snowboard.dlugosc)
		return false;
	if (poziom != snowboard.poziom)
		return false;
	if (dostepnosc != snowboard.dostepnosc)
		return false;
	return true;
}
//porownanie ceny (jesli mniejsza to true)
bool Snowboard::operator << (const Snowboard &snowboard)
{
	if (cena < snowboard.cena)
		return true;
	return false;
}
//porownanie poziomu (jesli wyzszy to true)
bool Snowboard::operator >> (const Snowboard &snowboard)
{
	if (poziom > snowboard.poziom)
		return true;
	return false;
}
