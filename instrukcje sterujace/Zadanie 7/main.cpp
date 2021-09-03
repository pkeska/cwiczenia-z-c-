#include <iostream>

using namespace std;

int main()
{
    int godzina;
    /*
    Napisz program, ktory bedzie wyswietlac agende pewnego dnia spotkania. Dzien wyglada nastepujaco:
    8-11 wyklady
    12-13 dyskusje
    14 obiad
    15-18 prelekcje
    19 kolacja

    Program ma pobraæ godzinê od u¿ytkownika i wyswietlic informacje o wszystkich punktach dnia, które jeszcze bêd¹, pocz¹wszy od podanej godziny
    */

    cout << "Podaj godzine!" << endl;
    cin >> godzina;

    if(godzina>=8&&godzina<=11)
        cout << "Dalszy Program dnia: " << endl << "8-11 wyklady" <<endl << "12-13 dyskusje"  <<endl<< "14 obiad" <<endl << "15-18 prelekcje"  <<endl<< "19 kolacja";

    if(godzina>=12&&godzina<=13)
        cout << "Dalszy Program dnia: " << endl << "12-13 dyskusje"  <<endl<< "14 obiad" <<endl << "15-18 prelekcje"  <<endl<< "19 kolacja";

    if(godzina==14)
        cout << "Dalszy Program dnia: " << endl << "14 obiad" <<endl << "15-18 prelekcje"  <<endl<< "19 kolacja";

    if(godzina>=15&&godzina<=18)
        cout << "Dalszy Program dnia: " << endl << "15-18 prelekcje"  <<endl<< "19 kolacja";

    if(godzina==19)
        cout << "Dalszy Program dnia: " << endl << "19 kolacja";

    if(godzina>19||godzina<8)
        cout << "Brak programu o tej godzinie" << endl;

    return 0;
}
