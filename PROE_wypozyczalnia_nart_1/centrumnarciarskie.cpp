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