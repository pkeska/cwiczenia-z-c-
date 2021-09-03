#include <iostream>

using namespace std;

void zamiana()
{
    int a,b, pomocnicza;
    cout << "podaj a" << endl;
    cin >> a;
    cout << "podaj b" << endl;
    cin >> b;
    pomocnicza = b;
    b=a;
    a=pomocnicza;

    cout << "Zmienna a to:" << a << endl;
    cout << "Zmienna b to:" << b << endl;
}

int main()
{
        // Napisz funkcjê, która wymienia wartoœciami dwie zadane liczby ca³kowite.

    zamiana();

    return 0;
}
