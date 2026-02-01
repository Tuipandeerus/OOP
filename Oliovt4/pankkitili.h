#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>

using namespace std;

class Pankkitili
{
public:

    Pankkitili();
    Pankkitili(string);

    double getBalance();

    virtual bool deposit(double);
    virtual bool withdraw(double);

private:

    //Jos olisi jotain salaista merkitty "-" luokkakaavioissa

protected:

    std::string omistaja;
    double saldo = 0;

};

#endif // PANKKITILI_H

