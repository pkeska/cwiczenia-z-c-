#include <iostream>
#include <string.h>

using namespace std;

void dlugosc()
{
    char tekst[20];
    puts("Podaj tekst");
    gets(tekst);
    int a = strlen(tekst);
    cout << "Dlugosc tekstu to: " << a << " znakow.";
}
int main()
{

    //Napisz funkcj�, kt�ra sprawdzi jak� d�ugo�� znak�w posiada tekst wprowadzony przez u�ytkownika.

    dlugosc();

    return 0;
}
