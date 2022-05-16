#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>

using namespace std;


class Enemigo
{
public:
    Enemigo();
    string getAtaque() const;
    void setAtaque(const string &value);

    int getEnergia() const;
    void setEnergia(int value);

    int getFuerza() const;
    void setFuerza(int value);

    string getTipo() const;
    void setTipo(const string &value);

    //metodo virtual puro...Vueve abstracta la clase
    virtual void atacar() =0;
private:
    string ataque;
    int energia ;
    int fuerza;
    string tipo;
};

#endif // ENEMIGO_H
