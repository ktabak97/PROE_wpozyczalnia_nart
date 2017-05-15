#include "wypozyczalnia.hpp"

using namespace std;


size_t Wypozyczalnia::ilosc_wypozyczalni = 0;
size_t Wypozyczalnia::ilosc_nartG = 0;


void Wypozyczalnia::zmienIloscPomieszczen(unsigned int iloscpomieszczen)
{
	pomieszczenia = iloscpomieszczen;
}

Wypozyczalnia::Wypozyczalnia()
{
	typ_lokalu = "Wszechstronna wypozyczalnia";
	adres = "Wypozyczalniowa";
	pomieszczenia = 1;
	ilosc_nart = 1;

	narty = new Narty[ilosc_nart];
	wszystkie_narty.push_back(narty);
	
	++ilosc_wypozyczalni;
	DEBUG_LOG("Wypozyczalnia - konstruktor domyslny");
};

Wypozyczalnia::Wypozyczalnia(string nazwa_w, unsigned int pomieszczenia_w)
{
	typ_lokalu = "Wypozyczalnia";
	adres = nazwa_w;
	pomieszczenia = pomieszczenia_w;
	ilosc_nart = 1;

	narty = new Narty[ilosc_nart];
	wszystkie_narty.push_back(narty);

	++ilosc_wypozyczalni;
	DEBUG_LOG("Wypozyczalnia - konstruktor z parametrami");
};


Wypozyczalnia::Wypozyczalnia(const Wypozyczalnia &wypozyczalnia)
{  
	typ_lokalu = wypozyczalnia.typ_lokalu;
	adres = wypozyczalnia.adres;
	pomieszczenia = wypozyczalnia.pomieszczenia;

	{
		string nazwa_s;
		unsigned int cena_s, dlugosc_s;
		Poziom_n poziom_s;
		Dostepnosc_n dostepnosc_s;
		
		if (wypozyczalnia.narty != nullptr)
		{
			narty = new Narty[wypozyczalnia.wszystkie_narty.size()];

			for (int i = 0; i < wypozyczalnia.wszystkie_narty.size(); i++)
			{
				nazwa_s = wypozyczalnia.wszystkie_narty.at(i)->zwrocNazwa();
				cena_s = wypozyczalnia.wszystkie_narty.at(i)->zwrocCena();
				dlugosc_s = wypozyczalnia.wszystkie_narty.at(i)->zwrocDlugosc();
				poziom_s = wypozyczalnia.wszystkie_narty.at(i)->zwrocPoziomN();
				dostepnosc_s = wypozyczalnia.wszystkie_narty.at(i)->zwrocDostepnoscN();

				this->dodajNarty(nazwa_s, cena_s, dlugosc_s, poziom_s, dostepnosc_s);
			}

		}
		else
			narty = nullptr;
	}

	DEBUG_LOG("Wypozyczalnia - konstruktor kopiujacy");
		++ilosc_wypozyczalni;
}
	

Wypozyczalnia::~Wypozyczalnia()
{
	delete[] narty;
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

void Wypozyczalnia::wypiszWszystko()
{
	cout << endl;
	cout << "Typ lokalu:" << typ_lokalu << endl;
	cout << "Adres lokalu:" << adres << endl;
	cout << "Ilosc pomieszczen:" << pomieszczenia << endl;

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

int Wypozyczalnia::liczbaNart()
{
	int l_nart = wszystkie_narty.size();
	return l_nart;
}

size_t Wypozyczalnia::zwrocIloscWypozyczalni(void)
{
	return ilosc_wypozyczalni;
}

size_t Wypozyczalnia::zwrocIloscNart(void)
{
	return ilosc_nartG;
}

void Wypozyczalnia::operator+(string nazwa_s)
{
	Narty *narty = new Narty(nazwa_s);
	wszystkie_narty.push_back(narty);
	cout << "Dodalem narte: " << nazwa_s << endl;

	++ilosc_nart;
}