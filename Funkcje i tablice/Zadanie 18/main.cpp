#include <iostream>

using namespace std;

int main()
{

    //Napisz program wczytujący z klawiatury 10 liczb całkowitych.
    //Wczytane liczby należy wydrukować na ekranie w odwrotnej kolejności, pobierając je z tablicy.

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
