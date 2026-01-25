#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>
using namespace std;

int main()
{
    string kokinNimi;
    Chef kokki_1("Tomppa");
 //   Chef kokki_1();
    kokinNimi = kokki_1.getName();
    //cout << "Main: kokiNimi on " << kokinNimi << endl;
    //kokki_1.makeSalad(10);
    //kokki_1.makeSalad(4);
    kokki_1.makeSalad(18);

    //kokki_1.makeSoup(3);
    //kokki_1.makeSoup(2);
    kokki_1.makeSoup(9);

//    ItalianChef it_kokki_2();

    ItalianChef it_kokki_2("Tomppeli");
    string italianKokinNimi;

    italianKokinNimi = it_kokki_2.getName();

    it_kokki_2.makeSalad(12);
    it_kokki_2.makeSoup(7);

//    it_kokki_2.makePizza();
//  it_kokki_2.askSecret("ok", 13, 15);
    it_kokki_2.askSecret("pizza", 12, 18);

    return 0;
}
