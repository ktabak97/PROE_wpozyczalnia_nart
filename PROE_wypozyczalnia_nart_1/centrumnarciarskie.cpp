#include "centrumnarciarskie.hpp"
#include "wypozyczalnia.hpp"
#include <iostream>
#include <vector>

using namespace std;

CentrumNarciarskie::CentrumNarciarskie()
{
	typ_lokalu = "lokal_domyslny";
	adres = "adres_domyslny";
	pomieszczenia = 1;
	DEBUG_LOG("CentrumNarciarskie - konstruktor domyslny");
}

CentrumNarciarskie::~CentrumNarciarskie()
{
	DEBUG_LOG("CentrumNarciarskie - destruktor");
}


































//void CentrumNarciarskie::dodajWypozyczalnia(string nazwa_w, unsigned int pomieszczenia_w)
//{
//	Wypozyczalnia *w = new Wypozyczalnia(nazwa_w, pomieszczenia_w);
//	centrum.push_back(wypozyczalnia);
//	cout << "Dodalem wypozyczalnie: " << nazwa_w << "o ilosci pomieszczen: " << pomieszczenia_w << endl;
//	liczba_lokali++;
//}

//size_t CentrumNarciarskie::zwrocIloscWypozyczalni(void)
//{
//	return ilosc_wypozyczalni;
//}

//void CentrumNarciarskie::usunWypozyczalnia(int numer)
//{
//	/* DOIMPLEMENTOWAC POZNIEJ!!! */
//}
