#include <iostream>

using namespace std;

int main()
{
    int i,liczba;
    //Napisz program, kt�ry pobierze od u�ytkownika liczb�, nast�pnie przemno�y j� przez 2 po ka�dym u�yciu p�tli. P�tla ma si� wykona� 10 razy.
    cout << "Podaj liczbe" << endl;
    cin >> liczba;

    while (i<10)
    {
        liczba=liczba*2;
        i++;
        cout << i << " - " << liczba << endl;
    }






    return 0;
}
