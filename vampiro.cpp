#include "vampiro.h"

Vampiro::Vampiro()
{
    setAtaque("Chupeton");
    setTipo("Vampiro");
    setEnergia(150);
    setFuerza(50);
    setGanancia(5);
}

void Vampiro::atacar(){
    cout<<getTipo()<< "ataca con: "<<getAtaque()<< endl
       <<getTipo()<<" ha producido "<<getFuerza()<<"de dano"<<getTipo();

}

int Vampiro::getGanancia() const
{
    return ganancia;
}

void Vampiro::setGanancia(int value)
{
    ganancia = value;
}
