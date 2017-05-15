#pragma once
#ifndef DZIALNARCIARSKI_HPP
#define DZIALNARCIARSKI_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif

#include "narty.hpp"
#include "snowboard.hpp"
#include "kask.hpp"
#include "wypozyczalnia.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;


class DzialNarciarski : public Wypozyczalnia
{
private:
	int ilosc_stojakow;

public:
	DzialNarciarski();
	~DzialNarciarski();


};


#endif DZIALNARCIARSKI_HPP// _DEBUG