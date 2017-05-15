using namespace std;

#include "narty.hpp"

size_t Narty::ilosc_nartG = 0;
string nazwapliku_n = "narty1.txt";

Narty::Narty()
{
	nazwa = "nartypodstawowe";
	cena = 30; //za dzien
	dlugosc = 160;
	poziom = Poziom_n::Poczatkujacy;
	dostepnosc = Dostepnosc_n::Dostepne;

	++ilosc_nartG;
	DEBUG_LOG("Narty - konstruktor domyslny");
};

Narty::Narty(string nazwa_s)
{
    nazwa = nazwa_s;
    cena = 30; //za dzien
    dlugosc = 160;
    poziom = Poziom_n::Poczatkujacy;
    dostepnosc = Dostepnosc_n::Dostepne;

	++ilosc_nartG;
	DEBUG_LOG("Narty - konstruktor z nazwa");
};

Narty::Narty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s)
{
    nazwa = nazwa_s;
    cena = cena_s; //za dzien
    dlugosc = dlugosc_s;
    poziom = poziom_s;
    dostepnosc = dostepnosc_s;

	++ilosc_nartG;
	DEBUG_LOG("Narty - konstruktor z parametrami");
};


Narty::Narty(const Narty &narty)
{
    nazwa = narty.nazwa;
    cena = narty.cena; //za dzien
    dlugosc = narty.dlugosc;
    poziom = narty.poziom;
    dostepnosc = narty.dostepnosc;

	++ilosc_nartG;
	DEBUG_LOG("Narty - konstruktor kopiujacy");
};

Narty::~Narty()
{
	--ilosc_nartG;
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
Poziom_n Narty::zwrocPoziomN(void) const
{
	return poziom;
}
string Narty::zwrocDostepnosc(void) const
{
	if(dostepnosc == Dostepnosc_n::Dostepne)
		return "Dostepne";
	else
		return "Wypozyczone";
}
Dostepnosc_n Narty::zwrocDostepnoscN(void) const
{
	return dostepnosc;
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
	return ilosc_nartG;
}


/////////////////////////////////////////////////////////////////////operatory

void Narty::operator= (const Narty &narty)
{
	cout << narty.nazwa << endl;
	nazwa = narty.nazwa;
	cena = narty.cena; //za dzien
	dlugosc = narty.dlugosc;
	poziom = narty.poziom;
	dostepnosc = narty.dostepnosc;
	
	DEBUG_LOG("Narty - kopiowanie");
}

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


void Narty::wypiszNarty()
{
	cout << "LISTA WSZYSTKICH SPRZETOW Z PARAMETRAMI" << endl << endl;
	cout << "NARTY:" << endl << endl;
	for (int i = 0; i < ilosc_nartG-1; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << zwrocNazwa() << endl;
		cout << "Cena:" << zwrocCena() << endl;
		cout << "Dlugosc:" << zwrocDlugosc() << endl;
		cout << "Poziom:" << zwrocPoziom() << endl;
		cout << "Dostepnosc:" << zwrocDostepnosc(); cout << endl << endl;
	}
}

void Narty::zapisz(Narty &nartyN)
{
	ofstream plik(nazwapliku_n);
	plik << nartyN;
	plik.close();


	DEBUG_LOG("Narty - zapisano do pliku");
}

void Narty::wczytaj(Narty &nartyN)
{
	ifstream plik(nazwapliku_n);
	plik >> nartyN;
	plik.close();


	DEBUG_LOG("Narty - wczytano z pliku");
}

ostream& operator << (ostream &n, Narty &nartyN)
{
	n << nartyN.nazwa << " " << nartyN.cena << " " << nartyN.dlugosc << " " <<
		nartyN.zwrocPoziom() << " " << nartyN.zwrocDostepnosc() << endl;
	return n;
}

istream &operator >> (istream &n, Narty &nartyN)
{
	n >> nartyN.nazwa >> nartyN.cena >> nartyN.dlugosc >>
		nartyN.zwrocPoziom() >> nartyN.zwrocDostepnosc();
	return n;
}