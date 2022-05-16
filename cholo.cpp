#include "cholo.h"

Cholo::Cholo()
{
setAtaque("Navajazo");
setTipo("Cholo malandro");
setFuerza(23);
setEnergia(100);
}

void Cholo:: atacar(){
    cout<<getTipo()<<"ataca con"<<getAtaque()<<endl
       <<getTipo()<<"Ha producido"<<getFuerza()<<"de daño"<<endl;

}
