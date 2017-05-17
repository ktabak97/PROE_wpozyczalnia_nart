#include "wypozyczalnia.hpp"
#include "sklep.hpp"
#include "wypnartzawod.hpp"
#include "testwypozyczalnia.hpp"


using namespace std;

void starttestwypozyczalnia()
{
	cout << endl;
	cout << "////////////////////////" << endl;
	cout << "Uruchamiam test sprzetu" << endl;
	cout << "////////////////////////" << endl << endl;


	Wypozyczalnia testowa("mysliborska", 3);
	system("PAUSE");
	testowa.dodajNarty("Volkl");
	system("PAUSE");
	testowa.dodajNarty("Blizzard");
	system("PAUSE");
	testowa.zapisz(testowa);
	system("PAUSE");

	testowa.wczytaj(testowa);
	system("PAUSE");
	testowa.wypiszZapisane();

	WypozyczalniaNartZawodniczych zawodnicza;
	system("PAUSE");
	zawodnicza.dodajNarty("FisherWC");
	system("PAUSE");
	zawodnicza.zapisz(zawodnicza);
	system("PAUSE");

	zawodnicza.wczytaj(zawodnicza);
	system("PAUSE");
	zawodnicza.wypiszZapisane();
	

	cout << "////////////////////////" << endl;
	cout << "Zakonczono test wypozyczalni" << endl;
	cout << "////////////////////////" << endl << endl;
	};
