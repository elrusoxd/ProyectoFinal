#include "../BARCOJ2/barcoj2.h"
#include "../MAQUINA/maquina.h"

#ifndef _JUEGO_
#define _JUEGO_

class Juego : public Barco2, public Maquina{
    private:
        int f,c;
    public:
        Juego(int f, int c);
        void batallaJ1yJ2(char (*tableroJ2)[9]);
        void batallaJ1yM();

};

#endif