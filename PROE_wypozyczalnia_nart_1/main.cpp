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
	Wypozyczalnia pierwsza;
    do
    {
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Wybierz jeden z testow:" << endl <<
                 "1. Wypozyczalnie" << endl <<
				 "2. Wyjscie" << endl;
        cin >> wybor;
        switch(wybor)
        {
            case 1:
                starttestwypozyczalnia();
                break;
            case 2:
                return 0;
                break;
			case 3:
				pierwsza.zapisz(pierwsza);
				break;
			case 4:
				pierwsza.wczytaj(pierwsza);
				break;
			case 5:
				pierwsza.zmienIloscPomieszczen(5);
				break;
			case 6:	
				pierwsza.wypiszPlikowe();
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


