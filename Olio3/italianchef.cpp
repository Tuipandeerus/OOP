#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    //cout << "Olen Italiandefaultkonstruktorissa!" << endl;
}

ItalianChef::ItalianChef(string cN)
{
    //cout << "Olen Italianinputkonstruktoriossa!" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
   // cout << "Olen Italiandefaultdestruktoriossa!" << endl;
}

/*
 * Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok,
 * ja jos on, kutsuu makePizza()-jäsenfunktiota.
 * Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
 * Funktio palauttaa true/false sen mukaan oliko salasana oikea.
 */

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int vertaa = pw.compare(password);

    if(vertaa != 0)
    {
        cout << "Väärä salasana!" << endl;
        return false;
    }

    cout << "Oikea salasana!" << endl;
    water = amountOfWater;
    flour = amountOfFlour;
    makePizza();

    return true;
}

int ItalianChef::makePizza()
{



    //tee tähän pizzanvalmistusalgoritmi
    int numberOfPizzas;
    cout << "Tehdaanpa pizzaa!" << endl;
    cout << "Jauhoja on: " << flour << " ja vetta on: " << water << endl;
    int amountOfFlour = flour/5;
    int amountOfWater = water/5;
    numberOfPizzas = min(amountOfFlour, amountOfWater);
    cout << "Kokki tekee " << numberOfPizzas << " pizzaa." << endl;

    return numberOfPizzas;
}
