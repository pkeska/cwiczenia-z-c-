#include <iostream>

using namespace std;

int main()
{
    int wiek;
    //Program, który bêdzie pobieraæ Twój wiek i wyœwietlaæ. Program ma sprawdzaæ czy wiek jest w przedziale od 1-100.

    cout << "Podaj swoj wiek." << endl; //wyœwietli siê napis "Podaj swój wiek"
    cin >> wiek; //pobieramy od u¿ytkownika jego wiek

    if((wiek>0)&&(wiek<101))
        cout << "Twoj wiek to: " << wiek << " lat.";
    else
        cout << "Bledne dane";


    return 0;
}
