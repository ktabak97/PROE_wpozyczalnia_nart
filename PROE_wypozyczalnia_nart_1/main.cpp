using namespace std;

#include <iostream>
#include <string>
#include <algorithm>

#include "testwypozyczalnia.hpp"

void starttestwypozyczalnia(void);


int main(void)
{
    int wybor;
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
            default:
                cout << "Wybierz wlasciwy numer:" << endl;
                cin.clear();
                cin.get();
        }
    }
    while(1);

    return 0;
}


