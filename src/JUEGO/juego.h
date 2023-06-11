#include "../BARCOJ2/barcoj2.h"
#include "../MAQUINA/maquina.h"

class Juego : public Barco2, public Maquina{
    private:
        Barco2 barcoJ2;
        Maquina maquina;
    public:
        Juego();
        void batallaJ1yJ2();
        void batallaJ1yM();

};