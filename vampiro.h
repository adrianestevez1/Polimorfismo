#ifndef VAMPIRO_H
#define VAMPIRO_H
#include "enemigo.h"
#include <iostream>

using namespace std;


class Vampiro: public Enemigo
{
public:
    Vampiro();
    int getGanancia() const;
    void setGanancia(int value);

    void atacar();

private:
    int ganancia;
};

#endif // VAMPIRO_H
