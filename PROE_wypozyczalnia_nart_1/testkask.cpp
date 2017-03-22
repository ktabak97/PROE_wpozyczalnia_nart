#include "kask.hpp"
#include "testkask.hpp"


using namespace std;

void starttestkask()
{
	cout << endl;
	cout << "////////////////////////" << endl;
	cout << "Uruchamiam test kaskow" << endl;
	cout << "////////////////////////" << endl << endl;


	Kask podstawowy;
	Kask ekspert("atomic", 20, 58, Kolor_k::Niebieski);
	Kask normalne;
	Kask kopiaeks(ekspert);


	cout << endl;
	cout << "Pierwszy:" << podstawowy.zwrocNazwa() << endl << "Cena: " << podstawowy.zwrocCena() << endl <<
		"Srednica: " << podstawowy.zwrocSrednica() << endl << "Kolor: " << podstawowy.zwrocKolor() << endl << endl;

	cout << "Drugi:" << ekspert.zwrocNazwa() << endl << "Cena: " << ekspert.zwrocCena() << endl <<
		"Srednica: " << ekspert.zwrocSrednica() << endl << "Kolor: " << ekspert.zwrocKolor() << endl << endl;

	cout << "Trzeci:" << normalne.zwrocNazwa() << endl << "Cena: " << normalne.zwrocCena() << endl <<
		"Srednica: " << normalne.zwrocSrednica() << endl << "Kolor: " << normalne.zwrocKolor() << endl << endl;

	cout << "Czwarty:" << kopiaeks.zwrocNazwa() << endl << "Cena: " << kopiaeks.zwrocCena() << endl <<
		"Srednica: " << kopiaeks.zwrocSrednica() << endl << "Kolor: " << kopiaeks.zwrocKolor() << endl << endl;


	cout << "////////////////////////" << endl;
	cout << "Zakonczono test kaskow" << endl;
	cout << "////////////////////////" << endl << endl;
	cout << "Utworzono w sumie: " << Kask::zwrocIloscKaskow() << " obiekty/ow typu Kask" << endl;

};
