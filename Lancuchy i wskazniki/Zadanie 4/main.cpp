#include <iostream>
#include <string.h>

using namespace std;

void porownanie()
{
    char napis1[20], napis2[20]; //deklaracja dwóch zmiennych
    puts("Podaj napis nr 1");
    gets(napis1); //pobranie zmiennej od u¿ytkownika
    puts("Podaj napis nr 2");
    gets(napis2);//pobranie zmiennej od u¿ytkownika
    if(strcmp(napis1, napis2)==0) //funkcja strcmp zwraca wartosc 0 gdy napisy sa takie same
        cout << "Napisy sa takie same";
    else
        cout << "Napisy sa rozne od siebie";
}

int main()
{

    //Napisz funkcjê, która porówna dwa napisy wprowadzone przez u¿ytkownika.
    //Zwróæ uwagê, aby porównywana by³a wielkoœæ liter w ³añcuchu.



    porownanie(); //wywolanie funkcji
    return 0;
}
