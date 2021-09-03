#include <iostream>

using namespace std;

int main()
{
    int liczba, i, silnia;
    //program ma wyliczyæ silniê
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
    i=0;
    silnia = 1;

    if(liczba>=0)
    {
        while(i<liczba)
        {
            //3! = 1 * 2 * 3
            //4! = 1 * 2 * 3 * 4

            i++;
            silnia = silnia * i;
        }
        cout << silnia;
    }
    else
    {
        cout << "Bledne dane";
    }


    return 0;
}
