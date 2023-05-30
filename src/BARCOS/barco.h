class Barco{

  private: 
  int a, b;
  char **tablero;

  public: 
  
  Barco::Barco (int _a, int _b);

  void setA(int _a);
  void setB(int _b);

  int getA();
  int getB();

  void ingresarPosicion();
  void mostrar ();
  
  


};