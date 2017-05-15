#pragma once
#ifndef DZIALNARCIARSKI_HPP
#define DZIALNARCIARSKI_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "wypozyczalnia.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;

enum class Komorki { Dostepne, OstatnieSztuki, Wypozyczone };

class WypozyczalniaNartZawodniczych : public Wypozyczalnia
{
private:
	Komorki komorki;

public:
	WypozyczalniaNartZawodniczych();
	~WypozyczalniaNartZawodniczych();
	string czysanartykomorkowe(void) const;

};


#endif DZIALNARCIARSKI_HPP// _DEBUG