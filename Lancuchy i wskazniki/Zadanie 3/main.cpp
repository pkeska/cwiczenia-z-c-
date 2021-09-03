#include <iostream>
#include <string.h> //dodanie biblioteki

using namespace std;

int main()
{
    char napis[20];
//Pobierz dwa wyrazy od u¿ytkownika pisane du¿ymi literami i zapisz je do zmiennej napis.
//Nastêpnie zmieñ du¿e litery na ma³e automatycznie.
//Nastêpnie zastosuj funkcjê, która zamienia litery na du¿e i wyœwietla tekst. Przy ka¿dym wyœwietleniu opisz, czym jest konkretny tekst.

    puts("Podaj napis: ");
    gets(napis); //pobiera napis
    strlwr(napis);
    cout << "Funkcja zamienia duze litery na male: " << endl;
    puts(napis);
    strupr(napis);
    cout << "Funkcja zamienia male litery na duze: " << endl;
    puts(napis);

    return 0;
}
