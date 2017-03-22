#include "snowboard.hpp"
#include "testsnowboard.hpp"


using namespace std;

void starttestsnowboard()
{
	cout << endl;
	cout << "////////////////////////" << endl;
	cout << "Uruchamiam test snowboardu" << endl;
	cout << "////////////////////////" << endl << endl;


	Snowboard podstawowe("burton");
	Snowboard ekspert("k2", 50, 160, Poziom_s::Ekspert, Dostepnosc_s::Wypozyczony);
	Snowboard normalne("salomon");
	Snowboard kopiaeks(ekspert);




	cout << endl;
	cout << "Pierwszy:" << podstawowe.zwrocNazwa() << endl << "Cena: " << podstawowe.zwrocCena() << endl <<
		"Dlugosc: " << podstawowe.zwrocDlugosc() << endl << "Poziom: " << podstawowe.zwrocPoziom() << endl <<
		"Dostepnosc: " << podstawowe.zwrocDostepnosc() << endl << endl;

	cout << "Drugi:" << ekspert.zwrocNazwa() << endl << "Cena: " << ekspert.zwrocCena() << endl <<
		"Dlugosc: " << ekspert.zwrocDlugosc() << endl << "Poziom: " << ekspert.zwrocPoziom() << endl <<
		"Dostepnosc: " << ekspert.zwrocDostepnosc() << endl << endl;

	cout << "Trzeci:" << normalne.zwrocNazwa() << endl << "Cena: " << normalne.zwrocCena() << endl <<
		"Dlugosc: " << normalne.zwrocDlugosc() << endl << "Poziom: " << normalne.zwrocPoziom() << endl <<
		"Dostepnosc: " << normalne.zwrocDostepnosc() << endl << endl;

	cout << "Czwarty:" << kopiaeks.zwrocNazwa() << endl << "Cena: " << kopiaeks.zwrocCena() << endl <<
		"Dlugosc: " << kopiaeks.zwrocDlugosc() << endl << "Poziom: " << kopiaeks.zwrocPoziom() << endl <<
		"Dostepnosc: " << kopiaeks.zwrocDostepnosc() << endl << endl;


	cout << "////////////////////////" << endl;
	cout << "Zakonczono test snowboardu" << endl;
	cout << "////////////////////////" << endl << endl;
	cout << "Utworzono w sumie: " << Snowboard::zwrocIloscSnowboardow() << " obiekty/ow typu Snowboard" << endl;

};
