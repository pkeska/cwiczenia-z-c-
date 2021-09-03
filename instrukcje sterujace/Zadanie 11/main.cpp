#include <iostream>

using namespace std;

int main()
{
    float metry;
    int jednostka;
    //Napisz program, ktory przeliczy metry na inne jednostki (cm, mm, km)

    cout << "Podaj ilosc metrow" << endl;
    cin >> metry;

    if(metry>0)
    {
        cout << "Podaj jednostke miary na jaka chcesz przeliczyc" << endl;
        cout << "1 - zamiana metrow na cm" << endl;
        cout << "2 - zamiana metrow na mm" << endl;
        cout << "3 - zamiana metrow na km" << endl;
        cin >> jednostka;

        switch (jednostka)
        {
            case 1:
                cout << metry << " metrow na cm wynosi: " << metry * 100;
            break;

            case 2:
                cout << metry << " metrow na mm wynosi: " << metry * 1000;
            break;

            case 3:
                cout << metry << " metrow na km wynosi: " << metry / 1000;
            break;

            default:
                cout << "Bledne dane";
            break;
        }
    }
    else
    {
        cout << "Bledne dane";
    }





    return 0;
}
