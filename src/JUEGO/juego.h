#include "../BARCOJ2/barcoj2.h"
#include "../MAQUINA/maquina.h"

#ifndef _JUEGO_
#define _JUEGO_

class Juego : public Barco2, public Maquina{
    private:
        int f,c;
        char (*DisparosJ1)[9];
        char (*DisparosJ2)[9];
        char (*DisparosM)[9];
    public:
        Juego();
        ~Juego();
        
        void batallaJ1(char (*tableroJ2)[9], char (*tableroM)[9]);
        void batallaJ2(char(*tableroJ1)[9]);
        void batallaM(char (*tableroJ1)[9]);


};

#endif