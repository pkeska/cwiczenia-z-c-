#include <iostream>

using namespace std;

int main()
{
    int a,i;
    /*
    Przy pomocy pêtli DO...While napisz program, który pobierze od u¿ytkownika liczbê, nastêpnie w pêtli do...while doda i zwiêkszy j¹ o 2. Pêtla ma siê wykonaæ 10 razy.
    */
    cout << "Podaj liczbe" << endl;
    cin >> a;
    i=1;

    do
    {
        a=a+2;
        i++;
        cout << a << endl;
    }
    while(i<10);



    return 0;
}
