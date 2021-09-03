#include <iostream>

using namespace std;

int main()
{
    /* Napisz program, który zsumuje 8 liczb podanych przez uzytkownika. Nie tworz przy tym 8 zmiennych, wystarcza 3*/

    int suma,b,i;

    for(i=1; i<=8; i++)
    {
        cout << "Podaj liczbe nr " << i << endl;
        cin >> b;
        suma = suma + b;
    }
    cout << suma;


    return 0;
}

