#include <iostream>
#include <string.h>

using namespace std;

int main()
{
//    Pobierz dwa wyrazy od u¿ytkownika (w jednej zmiennej) i zapisz je do zmiennej napis.
//      Nastêpnie odwróæ kolejnoœæ znaków w ³añcuchu.

    char lancuch[30];
    puts("Podaj ciag znakow");
    gets(lancuch); // funkcja pobiera od uzytkownika dane i zapisuje w lancuchu
    strrev(lancuch);// funkcja zamienia kolejnosc znakow w lancuchu
    puts(lancuch); //funkcja wyswietla dane zawarte w lancuchu




    return 0;
}
