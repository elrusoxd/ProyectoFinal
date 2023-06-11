#include "juego.h"
#include <iostream>
using namespace std;

Juego::Juego(): Barco2(),Maquina(){}

void Juego::batallaJ1yJ2(){
    barcoJ2.ingresarPosicion();
    barcoJ2.ingresarPosicion2();
    int f, c;
    cout << "LA BATALLA COMIENZA"<< endl;
    cout<< "Inicia el Jugador 1 atacando"<<endl;
    cout<< "Ingrese coordenada a la cual quiera disparar:" << endl;
    cin>> f >> c;

    tableroJ2[f][c]

}