#include <iostream>

using namespace std;

int main()
{

    //Napisz program wczytuj�cy z klawiatury 10 liczb ca�kowitych.
    //Wczytane liczby nale�y wydrukowa� na ekranie w odwrotnej kolejno�ci, pobieraj�c je z tablicy.

    int tablica[9];

    for(int i=0; i<10; i++)
    {
        cout << "Podaj liczbe" << endl;
        cin >> tablica[i];
    }

    for(int i=9; i>=0; i--)
    {
        cout << "Zapis w tablicy nr " << i << ": " << tablica[i] << endl;
    }



    return 0;
}
