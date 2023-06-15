#include "../BARCOJ1/barcoJ1.h"
#ifndef _BARCOJ2_
#define _BARCOJ2_

class Barco2:public Barco{

  private: 
    char  (*tableroJ2)[9];

  public: 
  
  
    Barco2 ();
    ~Barco2();

    void ingresarPosicion2();
    void mostrar2 ();

    int getTableroJ2();

   
  



};

#endif