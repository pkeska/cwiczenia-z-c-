#include <iostream>
//#include <stdio.h>
using namespace std;

int main()
{
    FILE *plik;
    plik = fopen("dane.txt", "a+");
    fclose(plik);

    return 0;
}
