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
	testowa.dodajNarty("Volkl");
	testowa.dodajNarty("Blizzard");
	testowa.zapisz(testowa);
	system("PAUSE");

	testowa.wczytaj(testowa);
	testowa.wypiszZapisane();

	WypozyczalniaNartZawodniczych zawodnicza;
	zawodnicza.dodajNarty("Fisher WC");
	zawodnicza.zapisz(zawodnicza);
	system("PAUSE");

	zawodnicza.wczytaj(zawodnicza);
	system("PAUSE");
	zawodnicza.wypiszWszystko();
//	zawodnicza.wypiszZapisane();
	

	cout << "////////////////////////" << endl;
	cout << "Zakonczono test wypozyczalni" << endl;
	cout << "////////////////////////" << endl << endl;
	};
