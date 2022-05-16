#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "enemigo.h"
#include <iostream>

using namespace std;

class Zombie: public Enemigo
{
public:
    Zombie();
    void atacar();
};

#endif // ZOMBIE_H
