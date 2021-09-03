#include <iostream>

using namespace std;

int main()
{
//Napisz program który zadeklaruje zmienn¹ typu char 10 znakow¹,
//nastêpnie u¿ytkownik uzupe³ni j¹ danymi (dwa wyrazy oddzielone spacj¹) i wyœwietli j¹ na ekranie.

char dane[10];
cout << "Podaj ciag znakow ze spacja: ";
gets(dane); //wczytuje caly wiersz ze spacjami
cout << "Ciag znakow przy pomocy funkcji gets wyglada nastepujaco: ";
puts(dane);

cout << endl;

cout << "Podaj ciag znakow ze spacja: ";
cin >> dane; //(cin wczytuje tylko do pierwszej spacji)
cout << "Ciag znakow przy pomocy funkcji cin wyglada nastepujaco: ";
cout << dane;

cout << endl;
return 0;
}
