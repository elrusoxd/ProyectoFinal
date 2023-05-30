class Barco{

  private: 
  int a, b;
  char tablero [9][9];

  public: 
  
  Barco::Barco (int _a, int _b, char _tablero[9][9]);

  void setA(int _a);
  void setB(int _b);
  void setTablero (char _tablero[9][9]);

  int getA();
  int getB();
  char getTablero();

  void ingresarPosicion();
  void mostrar ();
  
  


};