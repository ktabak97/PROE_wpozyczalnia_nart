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


	Wypozyczalnia pierwsza("mysliborska", 3);
	pierwsza.wypiszWszystko();

	WypozyczalniaNartZawodniczych zawodnicza;
	zawodnicza.dodajNarty("Fisher WC");
	zawodnicza.wypiszWszystko();


	//pierwsza.wypiszWszystko();
	//pierwsza.dodajNarty("elan");
	//pierwsza.dodajNarty("dynastar");
	//pierwsza.dodajNarty("volkl", 39, 158, Poziom_n::Zaawansowany, Dostepnosc_n::Dostepne);
	//pierwsza.dodajSnowboard("burton");
	//pierwsza.dodajKask("uvex");
	//pierwsza.dodajSnowboard("K2", 47, 145, Poziom_s::Ekspert, Dostepnosc_s::Wypozyczony);
	//pierwsza.dodajKask("atomic", 17, 52, Kolor_k::Czerwony);
	//
	//pierwsza.wypiszWszystko();

	//pierwsza.usunNarte("dynastar");
	//pierwsza.usunKask("uvex");
	//pierwsza.usunSnowboard("brton");

	//pierwsza.wypiszNarty();

	//Wypozyczalnia kopia(pierwsza);
	//kopia.dodajNarty("atomic");
	//kopia.wypiszWszystko();

	//kopia + "rossignol";
	//kopia.wypiszNarty();


	cout << "////////////////////////" << endl;
	cout << "Zakonczono test wypozyczalni" << endl;
	cout << "////////////////////////" << endl << endl;
	cout << "Utworzono w sumie: " << Wypozyczalnia::zwrocIloscWypozyczalni() << " obiekty/ow typu Wypozyczalnia" << endl << endl;
	};
