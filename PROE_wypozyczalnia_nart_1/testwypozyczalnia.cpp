#include "wypozyczalnia.hpp"
#include "testwypozyczalnia.hpp"


using namespace std;

void starttestwypozyczalnia()
{
	cout << endl;
	cout << "////////////////////////" << endl;
	cout << "Uruchamiam test sprzetu" << endl;
	cout << "////////////////////////" << endl << endl;


	Wypozyczalnia pierwsza("mysliborska", 3);

	pierwsza.dodajNarty("elan");
	pierwsza.dodajNarty("dynastar");
	pierwsza.dodajNarty("volkl", 39, 158, Poziom_n::Zaawansowany, Dostepnosc_n::Dostepne);
	pierwsza.dodajSnowboard("burton");
	pierwsza.dodajKask("uvex");
	pierwsza.dodajSnowboard("K2");
	pierwsza.dodajKask("atomic");
	
	pierwsza.wypiszWszystko();

	pierwsza.usunNarte("dynastar");
	pierwsza.usunKask("atomic");
	pierwsza.usunSnowboard("brton");

	pierwsza.wypiszNarty();


	cout << "////////////////////////" << endl;
	cout << "Zakonczono test wypozyczalni" << endl;
	cout << "////////////////////////" << endl << endl;
	cout << "Utworzono w sumie: " << Wypozyczalnia::zwrocIloscWypozyczalni() << " obiekty/ow typu Wypozyczalnia" << endl;
	cout << "Utworzono w sumie: " << Wypozyczalnia::zwrocIloscNart() << " obiekty/ow typu Narty" << endl;
	cout << "Utworzono w sumie: " << Wypozyczalnia::zwrocIloscSnowboardow() << " obiekty/ow typu Snowboard" << endl;
	cout << "Utworzono w sumie: " << Wypozyczalnia::zwrocIloscKaskow() << " obiekty/ow typu Kask" << endl;
};
