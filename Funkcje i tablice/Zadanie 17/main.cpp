#include <iostream>

using namespace std;

int main()
{
    int tablica[10];

    for(int i=0; i<10; i++)
    {
        cout << "Podaj liczbe nr " << i << endl;
        cin >> tablica[i];
    }

    for(int i=0; i<10; i++)
    {
        cout << "Liczba nr " << i << "wynosi" << tablica[i] << endl;

    }




    cout << "Hello world!" << endl;
    return 0;
}
