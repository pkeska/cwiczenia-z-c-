#include <iostream>

using namespace std;

void suma()
{
    int a,suma2;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    cout << "Podaj liczbe" << endl;
    cin >> suma2;

    suma2 = suma2+a;
    cout << suma2;

}

int main()
{
    /*
    Napisz funkcj� SUMA wyznaczaj�c� sum� dw�ch liczb ca�kowitych,
    podanych przez u�ytkownika.
    Napisz program wykorzystuj�cy funkcj� SUMA.
    */
     suma();

    return 0;
}
