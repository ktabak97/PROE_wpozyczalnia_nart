using namespace std;

#include "wypozyczalnia.hpp"
#include <iostream>
#include <iomanip>
#include <string>


size_t Wypozyczalnia::ilosc_wypozyczalni = 0;
size_t Wypozyczalnia::ilosc_nart = 0;
size_t Wypozyczalnia::ilosc_snowboardow = 0;
size_t Wypozyczalnia::ilosc_kaskow = 0;


Wypozyczalnia::Wypozyczalnia()
{
	adres = "wypozyczalniowa";
	pomieszczenia = 1;
	
	++ilosc_wypozyczalni;
	DEBUG_LOG("Wypozyczalnia - konstruktor domyslny");
};

Wypozyczalnia::Wypozyczalnia(string nazwa_w, unsigned int pomieszczenia_w)
{
	adres = nazwa_w;
	pomieszczenia = pomieszczenia_w;

	++ilosc_wypozyczalni;
	DEBUG_LOG("Wypozyczalnia - konstruktor z parametrami");
};

Wypozyczalnia::~Wypozyczalnia()
{
	--ilosc_wypozyczalni;
	DEBUG_LOG("Wypozyczalnia - destruktor");
}

void Wypozyczalnia::dodajNarty(string nazwa_s)
{
	Narty *narty = new Narty(nazwa_s);
	wszystkie_narty.push_back(narty);
	cout << "Dodalem narte: " << nazwa_s << endl;

	++ilosc_nart;
}

void Wypozyczalnia::dodajNarty(string nazwa_s, unsigned int cena_s, unsigned int dlugosc_s, Poziom_n poziom_s, Dostepnosc_n dostepnosc_s)
{
	Narty *narty = new Narty(nazwa_s, cena_s, dlugosc_s, poziom_s, dostepnosc_s);
	this->wszystkie_narty.push_back(narty);
	cout << "Dodalem narte: " << nazwa_s << endl;

	++ilosc_nart;
}

void Wypozyczalnia::dodajSnowboard(string nazwa_s)
{
	Snowboard *snowboard = new Snowboard(nazwa_s);
	wszystkie_snowboardy.push_back(snowboard);
	cout << "Dodalem snowboard: " << nazwa_s << endl;

	++ilosc_snowboardow;
}

void Wypozyczalnia::dodajKask(string nazwa_k)
{
	Kask *kask = new Kask(nazwa_k);
	wszystkie_kaski.push_back(kask);
	cout << "Dodalem kask: " << nazwa_k << endl;

	++ilosc_kaskow;
}

void Wypozyczalnia::wypiszNarty()
{
	cout << "LISTA WSZYSTKICH NART Z PARAMETRAMI" << endl;
	int ln = liczbaNart();
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_narty.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_narty.at(i)->zwrocCena() << endl;
		cout << "Dlugosc:" << wszystkie_narty.at(i)->zwrocDlugosc() << endl;
		cout << "Poziom:" << wszystkie_narty.at(i)->zwrocPoziom() << endl;
		cout << "Dostepnosc:" << wszystkie_narty.at(i)->zwrocDostepnosc(); cout << endl << endl;
	}
}

void Wypozyczalnia::wypiszSnowboardy()
{
	cout << "LISTA WSZYSTKICH SNOWBOARDOW Z PARAMETRAMI" << endl;
	int ln = liczbaSnowboardow();
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_snowboardy.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_snowboardy.at(i)->zwrocCena() << endl;
		cout << "Dlugosc:" << wszystkie_snowboardy.at(i)->zwrocDlugosc() << endl;
		cout << "Poziom:" << wszystkie_snowboardy.at(i)->zwrocPoziom() << endl;
		cout << "Dostepnosc:" << wszystkie_snowboardy.at(i)->zwrocDostepnosc(); cout << endl << endl;
	}
}

void Wypozyczalnia::wypiszKaski()
{
	cout << "LISTA WSZYSTKICH KASKOW Z PARAMETRAMI" << endl;
	int ln = liczbaKaskow();
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_kaski.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_kaski.at(i)->zwrocCena() << endl;
		cout << "Srednica:" << wszystkie_kaski.at(i)->zwrocSrednica() << endl;
		cout << "Kolor:" << wszystkie_kaski.at(i)->zwrocKolor() << endl << endl;
	}
}

void Wypozyczalnia::wypiszWszystko()
{
	cout << "LISTA WSZYSTKICH SPRZETOW Z PARAMETRAMI" << endl << endl;
	cout << "NARTY:" << endl << endl;
	int ln = liczbaNart();
	for (int i = 0; i<ln; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_narty.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_narty.at(i)->zwrocCena() << endl;
		cout << "Dlugosc:" << wszystkie_narty.at(i)->zwrocDlugosc() << endl;
		cout << "Poziom:" << wszystkie_narty.at(i)->zwrocPoziom() << endl;
		cout << "Dostepnosc:" << wszystkie_narty.at(i)->zwrocDostepnosc(); cout << endl << endl;
	}
	cout << "SNOWBOARDY:" << endl << endl;
	int ls = liczbaSnowboardow();
	for (int i = 0; i<ls; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_snowboardy.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_snowboardy.at(i)->zwrocCena() << endl;
		cout << "Dlugosc:" << wszystkie_snowboardy.at(i)->zwrocDlugosc() << endl;
		cout << "Poziom:" << wszystkie_snowboardy.at(i)->zwrocPoziom() << endl;
		cout << "Dostepnosc:" << wszystkie_snowboardy.at(i)->zwrocDostepnosc(); cout << endl << endl;
	}
	cout << "KASKI:" << endl << endl;
	int lk = liczbaKaskow();
	for (int i = 0; i<lk; i++)
	{
		cout << i + 1 << "." << endl;
		cout << "Nazwa:" << wszystkie_kaski.at(i)->zwrocNazwa() << endl;
		cout << "Cena:" << wszystkie_kaski.at(i)->zwrocCena() << endl;
		cout << "Srednica:" << wszystkie_kaski.at(i)->zwrocSrednica() << endl;
		cout << "Kolor:" << wszystkie_kaski.at(i)->zwrocKolor() << endl << endl;
	}
}



void Wypozyczalnia::usunNarte(string nazwa_n)
{
	int ln = liczbaNart();
	string nazwa_temp;
	bool usunieto = false;
	for (int i = 0; i<ln; i++)
	{
		nazwa_temp = wszystkie_narty.at(i)->zwrocNazwa();
		if (nazwa_temp == nazwa_n)
		{
			delete wszystkie_narty.at(i);
			wszystkie_narty.erase(wszystkie_narty.begin() + i);
			cout << "Usunieto: " << nazwa_n << "." << endl;
			usunieto = true;
			break;
		}
	}
	if (usunieto == false)
	{
		cout << "Nie mozna usunac narty o nazwie " << nazwa_n << endl;
	}
}

void Wypozyczalnia::usunSnowboard(string nazwa_s)
{
	int ln = liczbaSnowboardow();
	string nazwa_temp;
	bool usunieto = false;
	for (int i = 0; i<ln; i++)
	{
		nazwa_temp = wszystkie_snowboardy.at(i)->zwrocNazwa();
		if (nazwa_temp == nazwa_s)
		{
			delete wszystkie_snowboardy.at(i);
			wszystkie_snowboardy.erase(wszystkie_snowboardy.begin() + i);
			cout << "Usunieto: " << nazwa_s << "." << endl;
			usunieto = true;
			break;
		}
	}
	if (usunieto == false)
	{
		cout << "Nie mozna usunac snowboardu o nazwie " << nazwa_s << endl;
	}
}

void Wypozyczalnia::usunKask(string nazwa_k)
{
	int ln = liczbaKaskow();
	string nazwa_temp;
	bool usunieto = false;
	for (int i = 0; i<ln; i++)
	{
		nazwa_temp = wszystkie_kaski.at(i)->zwrocNazwa();
		if (nazwa_temp == nazwa_k)
		{
			delete wszystkie_kaski.at(i);
			wszystkie_kaski.erase(wszystkie_kaski.begin() + i);
			cout << "Usunieto: " << nazwa_k << "." << endl;
			usunieto = true;
			break;
		}
	}
	if (usunieto == false)
	{
		cout << "Nie mozna usunac kasku o nazwie " << nazwa_k << endl;
	}
}


int Wypozyczalnia::liczbaNart()
{
	int l_nart = wszystkie_narty.size();
	return l_nart;
}

int Wypozyczalnia::liczbaSnowboardow()
{
	int l_snowboardow = wszystkie_snowboardy.size();
	return l_snowboardow;
}

int Wypozyczalnia::liczbaKaskow()
{
	int l_kaskow = wszystkie_kaski.size();
	return l_kaskow;
}


size_t Wypozyczalnia::zwrocIloscWypozyczalni(void)
{
	return ilosc_wypozyczalni;
}

size_t Wypozyczalnia::zwrocIloscNart(void)
{
	return ilosc_nart;
}
size_t Wypozyczalnia::zwrocIloscSnowboardow(void)
{
	return ilosc_snowboardow;
}
size_t Wypozyczalnia::zwrocIloscKaskow(void)
{
	return ilosc_kaskow;
}
