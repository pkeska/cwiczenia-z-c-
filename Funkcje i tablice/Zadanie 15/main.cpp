#include <iostream>

using namespace std;

int funkcja()
{
    int ilosc;
    int min, max, liczba;
    cout << "Podaj ilosc liczb: ";
    cin >> ilosc;

    for(int i=1; i<=ilosc; i++)
    {
        cout << "Podaj liczbe nr: " << i << " ";
        cin >> liczba;

        if(i==1)
        {
            min = liczba;
            max = liczba;
        }

        if(max<liczba)
            max=liczba;

        if(min>liczba)
            min=liczba;



    }
    cout << "Minimum to: " << min << endl;
    cout << "Maksimum to: " << max << endl;


}

int main()
{
    //Napisz funkcj�, kt�ra pobierze od u�ytkownika 4 liczby i wy�wietli z nich minimum i maksimum. Komunikat niech wy�wietli funkcja.


    funkcja();



    return 0;
}
