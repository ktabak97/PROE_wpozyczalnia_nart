#include "narty.hpp"
#include "testnarty.hpp"


using namespace std;

void starttestnarty()
{
    cout << endl;
    cout << "////////////////////////" << endl;
    cout << "Uruchamiam test nart" << endl;
    cout << "////////////////////////" << endl << endl;


Narty podstawowe("salomon");
Narty zaawansowane("fisher", 50, 170, Poziom_n::Zaawansowany, Dostepnosc_n::Wypozyczone);
Narty normalne("salomon");
Narty kopiazaaw(zaawansowane);




    cout << endl;
    cout << "Pierwsze:" << podstawowe.zwrocNazwa() << endl << "Cena: " << podstawowe.zwrocCena() << endl <<
            "Dlugosc: " << podstawowe.zwrocDlugosc() << endl << "Poziom: " << podstawowe.zwrocPoziom() << endl <<
            "Dostepnosc: " << podstawowe.zwrocDostepnosc() << endl << endl;

    cout << "Drugie:" << zaawansowane.zwrocNazwa() << endl << "Cena: " << zaawansowane.zwrocCena() << endl <<
            "Dlugosc: " << zaawansowane.zwrocDlugosc() << endl << "Poziom: " << zaawansowane.zwrocPoziom() << endl <<
            "Dostepnosc: " << zaawansowane.zwrocDostepnosc() << endl << endl;

    cout << "Trzecie:" << normalne.zwrocNazwa() << endl << "Cena: " << normalne.zwrocCena() << endl <<
            "Dlugosc: " << normalne.zwrocDlugosc() << endl << "Poziom: " << normalne.zwrocPoziom() << endl <<
            "Dostepnosc: " << normalne.zwrocDostepnosc() << endl << endl;

    cout << "Czwarte:" << kopiazaaw.zwrocNazwa() << endl << "Cena: " << kopiazaaw.zwrocCena() << endl <<
            "Dlugosc: " << kopiazaaw.zwrocDlugosc() << endl << "Poziom: " << kopiazaaw.zwrocPoziom() << endl <<
            "Dostepnosc: " << kopiazaaw.zwrocDostepnosc() << endl << endl;


cout << ">Sprawdzam, czy narty 1 i 2 sa takie same:" << endl;
    if(podstawowe == zaawansowane)
        cout << "Narty sa takie same!" << endl << endl;
    else
        cout << "Narty nie sa takie same!" << endl << endl;

cout << ">Sprawdzam, czy narty 1 sa tansze od nart 2:" << endl;
    if(podstawowe < zaawansowane)
        cout << "Narty 1 sa tansze" << endl << endl;
    else
        cout << "Narty 1 nie sa tansze" << endl << endl;

cout << ">Sprawdzam, czy narty 1 i 3 sa takie same:" << endl;
    if(podstawowe == normalne)
        cout << "Narty sa takie same!" << endl << endl;
    else
        cout << "Narty nie sa takie same!" << endl << endl;

cout << "Zmieniam cene nart 4 na 40 zlotych" << endl;
kopiazaaw.zmienCene(40);
cout << "Nowa cena to: " << kopiazaaw.zwrocCena() << endl <<endl;

cout << ">Sprawdzam, czy narty 1 sa przeznaczone dla lepszych narciarzy od nart 2:" << endl;
    if(podstawowe > zaawansowane)
        cout << "Narty 1 sa dla lepszych narciarzy" << endl << endl;
    else
        cout << "Narty 1 nie sa dla lepszych narciarzy" << endl << endl;

cout << ">Sprawdzam, czy narty 2 i 3 maja taka sama dlugosc:" << endl;
	if (zaawansowane != normalne)
		cout << "Narty sa takie same!" << endl << endl;
	else
		cout << "Narty nie sa takie same!" << endl << endl;

	cout << ">Sprawdzam, czy narty 3 sa dostepne:" << endl;
	if (zaawansowane ^ podstawowe)
		cout << "Narty sa dostepne!" << endl << endl;
	else
		cout << "Narty nie sa dostepne!" << endl << endl;



cout << ">Sprawdzam dzialanie operatora <<" << endl;
cout << kopiazaaw << endl;


	zaawansowane = zaawansowane + podstawowe;
	cout << endl << ">Dodaje cene nart 1 i 2 (operator +)" << endl;
	cout << "Cena 2 par nart:" << zaawansowane.zwrocCena() << endl << endl;




    cout << "////////////////////////" << endl;
    cout << "Zakonczono test nart" << endl;
    cout << "////////////////////////" << endl << endl;
    cout << "Utworzono w sumie: " << Narty::zwrocIloscNart() << " obiekty/ow typu Narty" << endl;

};
