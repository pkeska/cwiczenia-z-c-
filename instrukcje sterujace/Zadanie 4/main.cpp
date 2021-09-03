#include <iostream>

using namespace std;

int main()
{
    int a,b;

    //Program liczy pole prostokata wraz ze sprawdzeniem dlugosci

    cout << "Program liczy pole prostok¹ta" << endl;
    cout << "Podaj bok a" << endl;
    cin >> a;
    cout << "Podaj bok b" << endl;
    cin >> b;
    if((a>0)&&(b>0))
        cout << "Pole prostokata wynosi: " << a*b << endl;
    else
        cout << "Blad danych";


    return 0;
}
