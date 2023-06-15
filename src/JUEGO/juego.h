#ifndef _JUEGO_
#define _JUEGO_
#include "../BARCOJ1/barcoJ1.h"
#include "../BARCOJ2/barcoj2.h"
#include "../MAQUINA/maquina.h"

class Juego{
    private:
        int f,c, opcion, contador1=0, contador2=0, contador3, contador4;
        char (*DisparosJ1)[9];
        char (*DisparosJ2)[9];
        char (*DisparosM)[9];
        Barco B1;
        Barco2 B2;
        Maquina M;
    public:
        Juego();
        ~Juego();
        
        void batallaJ1();
        void batallaJ2();
        void batallaM();

        void setF(int _f);
        void setC (int _c);
        void setO (int _opcion);
        void setcontador1(int _contador1);
        void setcontador2(int _contador2);
     

        int getF ();
        int getC ();
        int getO ();

        int getcontador1();
        int getcontador2();
 

};

#endif