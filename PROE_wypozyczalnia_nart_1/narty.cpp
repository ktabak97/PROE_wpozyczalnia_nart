using namespace std;

#include "narty.hpp"
#include <iostream>
#include <iomanip>


size_t Narty::ilosc_nart = 0;

Narty::Narty()
{
	nazwa = "nartypodstawowe";
	cena = 30; //za dzien
	dlugosc = 160;
	poziom = Poziom_n::Poczatkujacy;
	dostepnosc = Dostepnosc_n::Dostepne;

	++ilosc_nart;
	DEBUG_LOG("Narty - konstruktor domyslny");
};

Narty::Narty(string nazwa_s)
{
    nazwa = nazwa_s;
    cena = 30; //za dzien
    dlugosc = 160;
    poziom = Poziom_n::Poczatkujacy;
    dostepnosc = Dostepnosc_n::Dostepne;

	++ilosc_nart;
	DEBUG_LOG("Narty - konstruktor z nazwa");
};

Narty::Narty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s)
{
    nazwa = nazwa_s;
    cena = cena_s; //za dzien
    dlugosc = dlugosc_s;
    poziom = poziom_s;
    dostepnosc = dostepnosc_s;

	++ilosc_nart;
	DEBUG_LOG("Narty - konstruktor z parametrami");
};


Narty::Narty(const Narty &narty)
{
    nazwa = narty.nazwa;
    cena = narty.cena; //za dzien
    dlugosc = narty.dlugosc;
    poziom = narty.poziom;
    dostepnosc = narty.dostepnosc;

	++ilosc_nart;
	DEBUG_LOG("Narty - konstruktor kopiujacy");
};

Narty::~Narty()
{
	--ilosc_nart;
	DEBUG_LOG("Narty - destruktor");
}

/////////////////////////////////////////////////////////////////////funkcje

string Narty::zwrocNazwa() const
{
    return nazwa;
}
unsigned int Narty::zwrocCena() const
{
    return cena;
}
unsigned int Narty::zwrocDlugosc() const
{
    return dlugosc;
}
string Narty::zwrocPoziom(void) const
{
	if(poziom == Poziom_n::Poczatkujacy)
		return "Poczatkujacy";
	else if(poziom == Poziom_n::Sredni)
		return "Sredni";
    else if(poziom == Poziom_n::Zaawansowany)
		return "Zaawansowany";
	else
		return "Ekspert";
}
string Narty::zwrocDostepnosc(void) const
{
	if(dostepnosc == Dostepnosc_n::Dostepne)
		return "Dostepne";
	else
		return "Wypozyczone";
}

void Narty::zmienNazwe(string n_nazwa)
{
    nazwa = n_nazwa;
}
void Narty::zmienCene(unsigned int n_cena)
{
    cena = n_cena;
}
void Narty::zmienWszystko(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s)
{
	nazwa = nazwa_s;
	cena = cena_s; //za dzien
	dlugosc = dlugosc_s;
	poziom = poziom_s;
	dostepnosc = dostepnosc_s;
}
size_t Narty::zwrocIloscNart(void)
{
	return ilosc_nart;
}


/////////////////////////////////////////////////////////////////////operatory

//porownanie dwoch sprzetow
bool Narty::operator == (const Narty &narty)
{
	if(cena != narty.cena)
		return false;
	if(dlugosc != narty.dlugosc)
		return false;
	if(poziom != narty.poziom)
		return false;
	if(dostepnosc != narty.dostepnosc)
		return false;
	return true;
}
//porownanie ceny 
bool Narty::operator < (const Narty &narty)
{
	if(cena < narty.cena)
		return true;
	return false;
}
//porownanie poziomu 
bool Narty::operator > (const Narty &narty)
{
	if(poziom > narty.poziom)
		return true;
	return false;
}
//porownanie dlugosci
bool Narty::operator != (const Narty &narty)
{
	if (dlugosc = narty.dlugosc)
		return false;
	return true;
}

bool Narty::operator ^ (const Narty &narty)
{
	if (dostepnosc == narty.dostepnosc)
		return true;
	return false;
}

Narty Narty::operator+(const Narty &narty)
{
	Narty c;
	c.cena = cena + narty.cena;
	return c;
}



/*
void Narty::operator[](int i)
{
	int a;
	a = narty.zwrocDlugosc();
	cout << a << endl;
}
*/
//operator strumieniowy


ostream &operator << (ostream &os, const Narty &narty)
{
	os << "Narty: " << narty.zwrocNazwa() << endl;
	os << "Cena: " << narty.zwrocCena() << endl;
	os << "Dlugosc: " << narty.zwrocDlugosc() << endl;
	os << "Poziom: " << narty.zwrocPoziom() << endl;
	os << "Dostepnosc: " << narty.zwrocDostepnosc() << endl;
	return os;
}

