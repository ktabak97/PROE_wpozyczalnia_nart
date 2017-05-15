#include <iostream>
#include <string>
#include <fstream>
#include "dzialnarciarski.hpp"

using namespace std;

string nazwa_plikuD = "dzialnarciarski.txt";

DzialNarciarski::DzialNarciarski()
{
	typ_lokalu = "DzialNarciarski";
	DEBUG_LOG("DzialNarciarski - konstruktor domyslny");
}

DzialNarciarski::~DzialNarciarski()
{
	DEBUG_LOG("DzialNarciarski - destruktor");
}
