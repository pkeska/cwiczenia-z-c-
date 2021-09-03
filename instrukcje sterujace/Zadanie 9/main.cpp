#include <iostream>

using namespace std;

int main()
{
    int ocena;
    //Napisz instrukcjê switch, która dla przekazanej jako parametr ca³kowity oceny wyswietli j¹ s³ownie (1-6)
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
