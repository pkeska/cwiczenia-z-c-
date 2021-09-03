#include <iostream>

using namespace std;
int tab[6][6];

int tablica()
{
    for(int i=1; i<7; i++) //przechodzi do nastepnego wiersza
    {
        for(int j=i; j<6+i; j++) //wyswietla wiersz
        {
            tab[i][j]=j; //wstawia liczbe do tablicy
            cout << " " << j; //wyswietla zawartosc pola tablicy
        }
        cout << endl; //przechodzi do nastepnej linii
    }






/*    for (int j=0;j<6;j++)
        {
            for(int i=0;i<6;i++)
            {
                tab[i][j]=(i+1)+j;
                cout<<" ["<<tab[i][j]<<"]  ";
            }
            cout<<endl;
        }

*/
}

int tablica2()
{
    //int tab[5][5];
   for (int j=1;j<6;j++)
            {
             for(int i=0;i<5;i++)
                {
                    cout<<" ["<<tab[i][j]*2<<"]  ";
                }
             cout<<endl;
            }
}
int main()
{
    tablica();
    cout<<endl;
    tablica2();
    return 0;
}
