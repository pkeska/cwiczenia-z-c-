#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
Pobierz od u¿ytkownika ci¹g znaków, nastêpnie zamieñ go na kod Ascii. U¿yj do tego:
char a='1';
printf("%d",(int)a); //konwersja znaku na int

Zaprojektuj wyjœciowy napis, aby znaki ci¹gu znajdowa³y siê nad znakami ASCII (przyjmij, ¿e szerokoœæ kolumny to 3 znaki), np.

-----------------------------------------------------------------
A   | B |
65 | 66
----------------------------------------------------------------- */

char ciag[30]; //deklaracja
cout << "Podaj ciag znakow" << endl;
gets(ciag); //pobranie ciagu
int dlugosc = strlen(ciag); //sprawdzenie dlugosci ciagu znakow
cout << "Dlugosc to: " << dlugosc << endl;
//int a;



for(int i=0; i<dlugosc; i++) //petla rysuje gorna tabele na podstawie ilosci znakow w ciagu
{
    cout << "------";
}

cout << endl << " "; //dodaje spacje, aby ulozenie pierwszego wiersza bylo prawidlowe


for(int i=0; i<dlugosc; i++) //petla wyswietla 1 wiersz z poszczegolnymi literami
{
    cout << "" << ciag[i] << "  |  ";
}

cout << endl; //przejscie do nastepnej linii

for(int i=0; i<dlugosc; i++) //petla do wstawiania kodow ascii
{
    if((int)ciag[i]<10) //instrukcja sprawdza czy liczba ascii jest liczba 1 cyfrowa. jezeli tak to dodaje 2 spacje
        cout << "  ";
    if((int)ciag[i]>9&&(int)ciag[i]<100) //instrukcja sprawdza czy liczba ascii jest liczba 2 cyfrowa. jezeli tak to dodaje 1 spacje.
        cout << " ";

    printf("%d",(int)ciag[i]); //wyswietla kod ascii
    cout << " | ";

}
cout << endl;
for(int i=0; i<dlugosc; i++)//petla rysuje dolna tabele na podstawie ilosci znakow w ciagu
{
    cout << "------";
}

    return 0;
}
