#include <iostream>

using namespace std;

int main()
{
    int wiek;
    //Program, kt�ry b�dzie pobiera� Tw�j wiek i wy�wietla�. Program ma sprawdza� czy wiek jest w przedziale od 1-100.

    cout << "Podaj swoj wiek." << endl; //wy�wietli si� napis "Podaj sw�j wiek"
    cin >> wiek; //pobieramy od u�ytkownika jego wiek

    if((wiek>0)&&(wiek<101))
        cout << "Twoj wiek to: " << wiek << " lat.";
    else
        cout << "Bledne dane";


    return 0;
}
