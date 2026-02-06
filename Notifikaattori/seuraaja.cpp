#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja()
{
    cout << "Seuraaja konstruktorio" << endl;
}

Seuraaja::Seuraaja(string aNimi)
{
    //cout << "Seuraaja parametrikonstruktorio" << endl;
    nimi = aNimi;
}

string Seuraaja::getNimi()
{
    //cout << "Olen Getter" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti)
{
    //cout << "Olen paivitys" << endl;
    cout << "viesti: " << viesti << endl;
}

