#include "../BARCOJ1/barcoJ1.h"
#ifndef _MAQUINA_
#define _MAQUINA_

class Maquina:public Barco{
  private:
  char(*tableroM)[9];

  public: 
  Maquina ();
  ~Maquina();

  char gettableroM();
  void settableroM(char (*_tableroM)[9]);

  void ingresarPosicionM();
  void mostrarM ();
  

   
};

#endif