#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    //Napisz program, który sprawdzi czy dane s³owo jest palindromem.

    char slowo[20], slowo2[20];
    puts("Podaj slowo");
    gets(slowo);
    strcpy(slowo2, slowo);
    strrev(slowo2);
    if(strcmp(slowo, slowo2)==0)
        cout << "To slowo to palindrom";
    else
        cout << "To slowo nie jest palindromem.";


    return 0;
}
