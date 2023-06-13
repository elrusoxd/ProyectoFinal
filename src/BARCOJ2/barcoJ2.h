#include "../BARCOJ1/barcoJ1.h"
#ifndef _BARCOJ2_
#define _BARCOJ2_

class Barco2:public Barco{

  private: 
    char  (*tableroJ2)[9];

  public: 
  
  
    Barco2 ();
    ~Barco2();

    char gettableroJ2();
    void settableroJ2(char (*_tableroJ2)[9]);

    void ingresarPosicion2();
    void mostrar2 ();
  



};

#endif