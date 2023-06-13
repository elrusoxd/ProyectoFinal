#include "../BARCOJ2/barcoj2.h"
#include "../MAQUINA/maquina.h"

class Juego : public Barco2, public Maquina{
    private:
        int f,c;
    public:
        Juego(int f, int c);
        void batallaJ1yJ2();
        void batallaJ1yM();

};