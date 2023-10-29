#pragma once
#include <Dibujo.hpp>
#include<Actualizable.hpp>

class Scorpio : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Scorpio(/* args */) : Dibujo("scorpio")
    {

    }
    ~Scorpio() {}
    void Actualizar(){

    }
};