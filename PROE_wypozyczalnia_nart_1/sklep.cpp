#include "sklep.hpp"
using namespace std;

Sklep::Sklep()
{
	typ_lokalu = "Sklep";
	adres = "sklepowa";
	pomieszczenia = 2;
	ilosc_przecen = 3;
	ilosc_nart = 1;
	DEBUG_LOG("Sklep - konstruktor domyslny");
};

Sklep::~Sklep()
{
	DEBUG_LOG("Sklep - destruktor");
};

void Sklep::wypiszWszystko()
{
	cout << endl;
	cout << "Typ lokalu: " << typ_lokalu << endl;
	cout << "Adres lokalu: " << adres << endl;
	cout << "Ilosc pomieszczen: " << pomieszczenia << endl;
	cout << "Ilosc przecen: " << ilosc_przecen << endl;
	cout << "Ilosc nart: " << ilosc_nart << endl;

	cout << "LISTA WSZYSTKICH SPRZETOW Z PARAMETRAMI" << endl << endl;
}

void Sklep::zmienIloscPomieszczen(unsigned int iloscpomieszczen)
{
	pomieszczenia = iloscpomieszczen;
}
