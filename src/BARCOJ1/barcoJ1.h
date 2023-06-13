#ifndef _BARCOJ1_
#define _BARCOJ1_


class Barco{

  private: 
  char (*tableroJ1)[9];
  

  public: 

  Barco ();
  ~Barco();
  
  char gettableroJ1();
  void settableroJ1(char (*_tableroJ1)[9]);
  
  void ingresarPosicion();
  void mostrar ();
  
  
  


};

#endif