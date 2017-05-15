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

class CentrumNarciarskie
{
public:
	CentrumNarciarskie();
	virtual ~CentrumNarciarskie();
	virtual void zmienIloscPomieszczen(unsigned int iloscpomieszczen) = 0;
	virtual void wypiszWszystko() = 0;
		
protected:
	string typ_lokalu;
	string adres;
	unsigned int pomieszczenia;
};


#endif WYPOZYCZALNIA_HPP// _DEBUG