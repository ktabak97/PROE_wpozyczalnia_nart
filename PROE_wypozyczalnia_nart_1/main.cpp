using namespace std;

#include <iostream>
#include <string>
#include <algorithm>

#include "testwypozyczalnia.hpp"
#include "wypozyczalnia.hpp"
#include "narty.hpp"

void starttestwypozyczalnia(void);


int main(void)
{
    int wybor;
	string a;
	int b;
	Wypozyczalnia pierwsza;
    do
    {
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Wybierz opcje:" << endl <<
                 "1. Test wypozyczalni" << endl << "2. Dodaj narty" << endl 
			<< "3. Zapisz" << endl << "4. Wczytaj" << endl << "5. Zmien ilosc pomieszczen" << endl
			<< "6. Wypisz" << endl << "7. Wyjdz" <<endl ;
        cin >> wybor;
        switch(wybor)
        {
            case 1:
                starttestwypozyczalnia();
                break;
            case 2:
				cout << "Podaj nazwe nart:" <<endl;
				cin >> a;
				pierwsza.dodajNarty(a);
				break;
			case 3:
				pierwsza.zapisz(pierwsza);
				break;
			case 4:
				pierwsza.wczytaj(pierwsza);
				break;
			case 5:
				cout << "Podaj ilosc pomieszczen:" << endl;
				cin >> b;
				pierwsza.zmienIloscPomieszczen(b);
				break;
			case 6:	
				pierwsza.wypiszZapisane();
				break;
			case 7:
				pierwsza.dodajNarty("volkl");
				break;
			default:
                cout << "Wybierz wlasciwy numer:" << endl;
                cin.clear();
                cin.get();
        }
    }
    while(1);

    return 0;
}


