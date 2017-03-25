using namespace std;

#include "kask.hpp"
#include <iostream>
//#include <string>

size_t Kask::ilosc_kaskow = 0;

Kask::Kask()
{
	nazwa = "kaskpodstawowy";
	cena = 15; //za dzien
	srednica = 55;
	kolor = Kolor_k::Czarny;

	++ilosc_kaskow;
	DEBUG_LOG("Kask - konstruktor domyslny");
};

Kask::Kask(string nazwa_k)
{
	nazwa = nazwa_k;
	cena = 15; //za dzien
	srednica = 55;
	kolor = Kolor_k::Czarny;

	++ilosc_kaskow;
	DEBUG_LOG("Kask - konstruktor z nazwa");
};

Kask::Kask(string nazwa_k, unsigned int cena_k, unsigned int srednica_k, Kolor_k kolor_k)
{
	nazwa = nazwa_k;
	cena = cena_k; //za dzien
	srednica = srednica_k;
	kolor = kolor_k;

	++ilosc_kaskow;
	DEBUG_LOG("Kask - konstruktor z parametrami");
};


Kask::Kask(const Kask &kask)
{
	nazwa = kask.nazwa;
	cena = kask.cena; //za dzien
	srednica = kask.srednica;
	kolor = kask.kolor;

	++ilosc_kaskow;
	DEBUG_LOG("Kask - konstruktor kopiujacy");
};


Kask::~Kask()
{
	--ilosc_kaskow;
	DEBUG_LOG("Kask - destruktor");
}

/////////////////////////////////////////////////////////////////////funkcje

string Kask::zwrocNazwa()
{
	return nazwa;
}
unsigned int Kask::zwrocCena()
{
	return cena;
}
unsigned int Kask::zwrocSrednica()
{
	return srednica;
}
string Kask::zwrocKolor(void)
{
	if (kolor == Kolor_k::Bialy)
		return "Bialy";
	else if (kolor == Kolor_k::Czarny)
		return "Czarny";
	else if (kolor == Kolor_k::Czerwony)
		return "Czerwony";
	else
		return "Niebieski";
}
Kolor_k Kask::zwrocKolorN(void) const
{
	return kolor;
}
void Kask::zmienNazwe(string k_nazwa)
{
	nazwa = k_nazwa;
}
void Kask::zmienCene(unsigned int k_cena)
{
	cena = k_cena;
}

size_t Kask::zwrocIloscKaskow(void)
{
	return ilosc_kaskow;
}


/////////////////////////////////////////////////////////////////////operatory

void Kask::operator= (const Kask &kask)
{
	cout << kask.nazwa << endl;
	nazwa = kask.nazwa;
	cena = kask.cena; //za dzien
	srednica = kask.srednica;
	kolor = kask.kolor;

	DEBUG_LOG("Kask - kopiowanie");
}


//porownanie dwoch sprzetow
bool Kask::operator == (const Kask &kask)
{
	if (cena != kask.cena)
		return false;
	if (srednica != kask.srednica)
		return false;
	if (kolor != kask.kolor)
		return false;
	return true;
}
//porownanie ceny (jesli mniejsza to true)
bool Kask::operator << (const Kask &kask)
{
	if (cena < kask.cena)
		return true;
	return false;
}
