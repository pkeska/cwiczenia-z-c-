#include <iostream>

using namespace std;

int main()
{
    FILE* plik = fopen("dane.txt", "r"); //otwiera plik z parametrem r
    char wczytaneZnaki[10];


    fgets(wczytaneZnaki, 10, plik);
    cout << wczytaneZnaki;

    fclose(plik); //zamyka plik


    return 0;
}
