#pragma once
#ifndef KASK_HPP
#define KASK_HPP
#ifdef _DEBUG
#define DEBUG_LOG(a) cout << __FILE__ << "(" << __LINE__ << "): " << a << endl;
#else
#define DEBUG_LOG(a)
#endif


#include <iostream>
#include <string>

using namespace std;

enum class Kolor_k { Bialy, Czarny, Czerwony, Niebieski };



class Kask
{
private:
	string nazwa;
	unsigned int cena;
	unsigned int srednica;
	Kolor_k kolor;
	static size_t ilosc_kaskow;

public:
	Kask();
	Kask(string);
	Kask(string, unsigned int, unsigned int, Kolor_k);
	Kask(const Kask &kask);
	~Kask();

	string zwrocNazwa();
	unsigned int zwrocCena();
	unsigned int zwrocSrednica();
	string zwrocKolor(void);
	Kolor_k zwrocKolorN(void) const;

	void zmienNazwe(string k_nazwa);
	void zmienCene(unsigned int k_cena);
	static size_t zwrocIloscKaskow(void);

	bool operator == (const Kask &kask);
	bool operator << (const Kask &kask);
	void operator= (const Kask &kask);
};

#endif KASK_HPP// _DEBUG

