#pragma once
#ifndef	CENTRUMNARCIARSKIE_HPP
#define CENTRUMNARCIARSKIE_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif

#include <iostream>
#include <fstream>

using namespace std;
///klasa abstrakcyjna
class CentrumNarciarskie 
{
public:
	CentrumNarciarskie(); 
	virtual ~CentrumNarciarskie(); 
	///funkcja wirtualna do zmiany ilosci pomieszczen
	virtual void zmienIloscPomieszczen(unsigned int iloscpomieszczen) = 0;  
	///funkcja wirtualna wypisujaca cechy danego obiektu
	virtual void wypiszWszystko() = 0; 
	///funkcj wirtualna wypisujaca wczytane obiekty
	virtual void wypiszZapisane() = 0;
		

protected: 
	///chronione zmienna, dostepne dla klas dziedziczacych
	string typ_lokalu; 
	///chronione zmienna, dostepne dla klas dziedziczacych
	string adres;
	///chronione zmienna, dostepne dla klas dziedziczacych
	unsigned int pomieszczenia;
	///chronione zmienna, dostepne dla klas dziedziczacych
	int ilosc_nart;
};


#endif WYPOZYCZALNIA_HPP// _DEBUG