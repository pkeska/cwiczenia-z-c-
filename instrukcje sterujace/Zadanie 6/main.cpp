#include <iostream>

using namespace std;

int main()
{
    int a; //deklaracja zmiennej
    cout << "Sprawdzanie czy liczba jest podzielna przez 2 i 5!" << endl;
    cout << "Podaj liczbe" << endl;
    cin >> a;

    if((a%2)==0&&(a%5)==0)
        cout << "Liczba jest podzielna przez 2 i 5" << endl;
    else
        cout << "Liczba NIE jest podzielna przez 2 i 5" << endl;

    return 0;
}
