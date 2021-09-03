#include <iostream>

using namespace std;

int main()
{
    float kwota;
    int waluta;
    /*
    Napisz program, który wczytuje kwotê w z³otych, a nastepnie przelicz aja na taka walute jaka wybierze uzytkownik (funty, dolary, euro). Kurs walut ustal wg wlasnego uznania. Zmienna typu float.
    */

    cout << "Podaj kwote do przeliczenia" << endl;
    cin >> kwota;

    cout << "Wybierz opcje" << endl;
    cout << "1 - zlotowki na funty" << endl;
    cout << "2 - zlotowki na dolary" << endl;
    cout << "3 - zlotowki na euro" << endl;
    cin >> waluta;

    switch(waluta)
    {
        case 1:
            cout << "Kwota " << kwota << " w zl to " << kwota / 5 << " funtow";
        break;

        case 2:
            cout << "Kwota " << kwota << " w zl to " << kwota / 3 << " dolarow";
        break;

        case 3:
            cout << "Kwota " << kwota << " w zl to " << kwota / 4 << " euro";
        break;

        default:
            cout << "Bledny wybor";
        break;



    }


    return 0;
}
