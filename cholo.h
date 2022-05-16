#ifndef CHOLO_H
#define CHOLO_H
#include "enemigo.h"
#include <iostream>

using namespace std;

class Cholo : public Enemigo
{
public:
    Cholo();
    void atacar();
};

#endif // CHOLO_H
