#pragma once
#ifndef SKLEP_HPP
#define SKLEP_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "centrumnarciarskie.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;


class Sklep : public CentrumNarciarskie
{
private:
	int ilosc_przecen;

public:
	///
	Sklep();
	~Sklep();
	void wypiszWszystko();
	void zmienIloscPomieszczen(unsigned int iloscpomieszczen);
};

#endif SKLEP_HPP// _DEBUG