#include <iostream>
#include<fstream>
#include<string>

using namespace std;

/*
Napisz program, kt�ry pobierze z pliku dane.txt zapisan� wcze�niej warto�� w postaci liczby ca�kowitej,
nast�pnie przemno�y j� przez 120 i zapisze wynik to pliku wynik.txt. Pami�taj, aby przekonwerowa� liczb� z pliku na int.

*/

int main()
{
    FILE* plik = fopen("dane.txt", "w"); //otwiera plik z parametrem w
    fprintf(plik,"%d", 240); //zapisuje do pliku zmienna i - %d pozwala na zapisanie int do pliku
    fclose(plik); //zamyka plik



    ifstream mojStrumien("dane.txt");  // Otwarcie pliku do odczytu

    if(mojStrumien)
    {
        string linia; //deklaracja zmiennej linia
        getline(mojStrumien, linia); // Odczytanie jednej linii tekstu
        int liczba = stoi( linia ); // zmienia string na int
        cout << liczba*2 << endl; //wyswietla przemnozona liczbe
    }
    else
    {
        cout << "B��D: nie mo�na otworzy� pliku do odczytu." << endl;
    }


    return 0;
}
