#include <iostream>

using namespace std;

int main()
{
    int i,liczba;
    //Napisz program, który pobierze od u¿ytkownika liczbê, nastêpnie przemno¿y j¹ przez 2 po ka¿dym u¿yciu pêtli. Pêtla ma siê wykonaæ 10 razy.
    cout << "Podaj liczbe" << endl;
    cin >> liczba;

    while (i<10)
    {
        liczba=liczba*2;
        i++;
        cout << i << " - " << liczba << endl;
    }






    return 0;
}
