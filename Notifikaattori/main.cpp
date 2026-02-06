#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
//    return 0;

    Notifikaattori n;
    Seuraaja* s1 = new Seuraaja("Roni");
    Seuraaja* s2 = new Seuraaja("Toni");
    Seuraaja* s3 = new Seuraaja("Jani");
    Seuraaja* s4 = new Seuraaja("Pasi");

    n.tulosta();
    n.postita("Hejdo!");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.lisaa(s4);
    n.tulosta();
    n.postita("Hejdo!");

    n.poista(s2);
    n.tulosta();
    n.poista(s1);
    n.poista(s3);
    n.poista(s4);
    n.tulosta();
    return 0;
}
