#include <iostream>
#include <string>
#include <fstream>
#include "wypnartzawod.hpp"

using namespace std;

string nazwa_plikuD = "dzialnarciarski.txt";

WypozyczalniaNartZawodniczych::WypozyczalniaNartZawodniczych()
{
	typ_lokalu = "DzialNarciarski";
	DEBUG_LOG("DzialNarciarski - konstruktor domyslny");
}

WypozyczalniaNartZawodniczych::~WypozyczalniaNartZawodniczych()
{
	DEBUG_LOG("DzialNarciarski - destruktor");
}

string WypozyczalniaNartZawodniczych::czysanartykomorkowe(void) const
{
	if (komorki == Komorki::Dostepne)
		return "Dostepne";
	else if (komorki == Komorki::OstatnieSztuki)
		return "Ostatnie sztuki";
	else 
		return "Wypozyczone";
}