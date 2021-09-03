#include <iostream>
#include <string.h>

using namespace std;

int main()
{
     //Napisz program, który wyœwietli tekst w postaci rozstrzelonej wprowadzony przez u¿ytkownika.

    char tekst[40];
    puts("Podaj tekst do rozstrzelenia");
    gets(tekst);
    int dlugosc = strlen(tekst);

    for(int i=0; i<=dlugosc; i++)
    {
        cout << tekst[i] << "  ";
    }

    return 0;
}
