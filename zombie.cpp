#include "zombie.h"

Zombie::Zombie()
{
  setAtaque("Mordizco");
  setTipo("zombie");
  setEnergia(30);
  setFuerza(50);

}

void Zombie::atacar(){
    cout<<getTipo()<<getAtaque()<<getFuerza()<<getEnergia();
}

