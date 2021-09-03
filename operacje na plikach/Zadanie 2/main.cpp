#include <iostream>

using namespace std;

int main()
{
    FILE* plik = fopen("dane.txt", "a+"); //otwiera plik z parametrem a+


    for(int i=0; i<10; i++)
    {
        fprintf(plik,"%d", i); //zapisuje do pliku zmienna i - %d pozwala na zapisanie int do pliku
    }

    fclose(plik); //zamyka plik


    return 0;
}
