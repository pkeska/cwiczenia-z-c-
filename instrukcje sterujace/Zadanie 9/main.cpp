#include <iostream>

using namespace std;

int main()
{
    int ocena;
    //Napisz instrukcj� switch, kt�ra dla przekazanej jako parametr ca�kowity oceny wyswietli j� s�ownie (1-6)
    cout << "Podaj ocene w skali (1-6)" << endl;
    cin >> ocena;

    switch (ocena)
    {
        case 1:
            cout << "Niedostateczny";
        break;

        case 2:
            cout << "Dopuszczajacy";
        break;

        case 3:
            cout << "Dostateczny";
        break;

        case 4:
            cout << "Dobry";
        break;

        case 5:
            cout << "Bardzo dobry";
        break;

        case 6:
            cout << "Celujacy";
        break;

        default:
            cout << "Bledne dane";
        break;

    }

    return 0;
}
