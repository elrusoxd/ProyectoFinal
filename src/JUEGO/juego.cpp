#include "juego.h"
#include <iostream>
using namespace std;

Juego::Juego(int f, int c): Barco2(),Maquina(){}

void Juego::batallaJ1yJ2(char (*tableroJ2)[9]){
    int f, c;
    cout << "LA BATALLA COMIENZA"<< endl;
    cout<< "Inicia el Jugador 1 atacando"<<endl;
    cout<< "Ingrese coordenada a la cual quiera disparar:" << endl;
    cin>> f >> c;

    tableroJ2[9][9]= 

}