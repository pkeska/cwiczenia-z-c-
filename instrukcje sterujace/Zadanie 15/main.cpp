#include <iostream>

using namespace std;

int main()
{
    int a,i;
    /*
    Przy pomocy p�tli DO...While napisz program, kt�ry pobierze od u�ytkownika liczb�, nast�pnie w p�tli do...while doda i zwi�kszy j� o 2. P�tla ma si� wykona� 10 razy.
    */
    cout << "Podaj liczbe" << endl;
    cin >> a;
    i=1;

    do
    {
        a=a+2;
        i++;
        cout << a << endl;
    }
    while(i<10);



    return 0;
}
