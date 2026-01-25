#include "chef.h"
#include <iostream>

Chef::Chef()
{
    //cout << "Olen default konstruktorissa!" << endl;
}

Chef::Chef(string cN)
{
    //cout << "Olen input konstruktorissa!" << endl;
    chefName = cN;
}

Chef::~Chef()
{
    //cout << "Olen default destruktorissa!" << endl;
}

int Chef::makeSalad(int numberOfIngredients)
{
    //cout << "Olen salaatti funktiossa!" << endl;
    //   int numberOfPortions = numberOfIngredients/5; <- voi määrittää returnissa
    cout << "Annoit: " << numberOfIngredients << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfIngredients/5 << " salaattiannosta" << endl;

    return numberOfIngredients/5;
}

int Chef::makeSoup(int numberOfIngredients)
{
    //cout << "Olen keitto funktiossa!" << endl;
    //    int numberOfPortions = numberOfIngredients <- voi määrittää returnissa
    cout << "Annoit: " << numberOfIngredients << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfIngredients/3 << " keittoannosta" << endl;

    return numberOfIngredients/3;
}

string Chef::getName()
{
    //cout << "Olen getterissa!" << endl;
    cout << "Kokin nimi on: " << chefName << endl;

    return chefName;
}

void Chef::setName(string cN)
{
    //cout << "Olen setterissä!" << endl;
    chefName = cN;
}
