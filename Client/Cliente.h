//
// Created by valeria on 05/04/19.
//

#ifndef CLIENTE_CLIENTE_H
#define CLIENTE_CLIENTE_H

#include <string>
#include <string.h>


class Cliente {


public:
    Cliente();
    int jugadorActual;
    void enviarPalabra();
    char *getPalabra();

private:
    int puntajeActual=0;


};


#endif //CLIENTE_CLIENTE_H
