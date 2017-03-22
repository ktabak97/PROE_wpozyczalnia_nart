using namespace std;

#include <iostream>
#include <string>
#include <algorithm>


#include "testnarty.hpp"
#include "testwypozyczalnia.hpp"
#include "testsnowboard.hpp"
#include "testkask.hpp"


void starttestnarty(void);
void starttestwypozyczalnia(void);
void starttestsnowboard(void);
void starttestkask(void);



int main(void)
{
    int wybor;
    do
    {
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Wybierz jeden z testow:" << endl <<
                 "1. Wypozyczalnie" << endl << "2. Narty" << endl <<
                 "3. Snowboard" << endl << "4. Kaski" << endl << 
				 "5. Wyjscie" << endl;
        cin >> wybor;
        switch(wybor)
        {
            case 1:
                starttestwypozyczalnia();
                break;
            case 2:
                starttestnarty();
                break;
            case 3:
                starttestsnowboard();
                break;
			case 4:
				starttestkask();
				break;
            case 5:
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


