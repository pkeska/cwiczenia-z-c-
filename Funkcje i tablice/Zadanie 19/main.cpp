#include <iostream>

using namespace std;

int wczytaj()
{
    int i=0,ilosc,liczba;
    cout << "Podaj iloœæ liczb do wczytania" << endl;
    cin >> ilosc;
    int tablica[ilosc-1];

    while(i<ilosc)
    {
        cout << "Podaj liczbe nr " << i << ": ";
        cin >> liczba;
        tablica[i]=liczba;
        i++;
    }

    //szukanie najwiekszej liczby w tablicy

    liczba = 0;

    for(int k=0; k<=ilosc; k++)
    {
        if(tablica[k]>liczba) //liczba4
        {
            liczba=tablica[k];
        }

    }

    cout << "Najwieksza liczba to: " << liczba;


}

int main()
{

    /* Napisz program wczytuj¹cy z klawiatury n liczb ca³kowitych.
    Program ma znaleŸæ najwiêksz¹ spoœród podanych liczb i wydrukowaæ j¹ na ekranie. U¿yj do tego tablic i funkcji.
*/
    wczytaj();
    cout << "Hello world!" << endl;
    return 0;
}
