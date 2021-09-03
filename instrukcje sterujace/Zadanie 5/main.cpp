#include <iostream>

using namespace std;

int main()
{
    int a;
    //Sprawdzanmie czy liczba jest parzysta
    cout << "Program sprawdza czy liczba jest parzysta" << endl;
    cout << "Podaj liczbe" << endl;
    cin >> a;

    if((a%2)==0)
        cout << "Liczba jest podzielna przez 2" << endl;
    else
        cout << "liczba nie jest podzielna" << endl;


/*
    dzielenie       ca³osci         reszta(wynik dzielenia modulo)
    18%2            9               0
    19%2            9               1
    5%2             2               1
*/
    return 0;
}

