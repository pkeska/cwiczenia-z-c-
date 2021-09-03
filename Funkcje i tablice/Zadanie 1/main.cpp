#include <iostream>

using namespace std;

void suma()
{
    int a,suma2;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    cout << "Podaj liczbe" << endl;
    cin >> suma2;

    suma2 = suma2+a;
    cout << suma2;

}

int main()
{
    /*
    Napisz funkcjê SUMA wyznaczaj¹c¹ sumê dwóch liczb ca³kowitych,
    podanych przez u¿ytkownika.
    Napisz program wykorzystuj¹cy funkcjê SUMA.
    */
     suma();

    return 0;
}
