#include <iostream>

using namespace std;

int wczytaj()
{
    int i=0,ilosc,liczba;
    cout << "Podaj ilo�� liczb do wczytania" << endl;
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

    /* Napisz program wczytuj�cy z klawiatury n liczb ca�kowitych.
    Program ma znale�� najwi�ksz� spo�r�d podanych liczb i wydrukowa� j� na ekranie. U�yj do tego tablic i funkcji.
*/
    wczytaj();
    cout << "Hello world!" << endl;
    return 0;
}
