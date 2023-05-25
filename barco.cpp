#include "./barco.h"
#include <iostream>
using namespace std;

Barco::Barco (int _barco1, int _barco2, int _barco3, int _barco4){
  barco1 = _barco1;
  barco2 = _barco2;
  barco3 = _barco3;
  barco4 = _barco4;

}

void Barco::setBarco1(int _barco1){ barco1 = barco1;}
void Barco::setBarco2(int _barco2){ barco2 = barco2;}
void Barco::setBarco3(int _barco3){ barco3 = barco3;}
void Barco::setBarco4(int _barco4){ barco4 = barco4;}

int Barco::getBarco1(){return barco1;}
int Barco::getBarco1(){return barco1;}
int Barco::getBarco1(){return barco1;}

void Barco::posicion (){
  int a, b;
  cout << " Ingrese medidas para el tablero mayores o iguales a 9x9: " << endl;
  cin >> a >> b;

  while ((a<9)&&(b<9)){
  cout << " Ingrese valores mayores o iguales a 9x9" << endl;
  cout << " Ingrese las medidas del tablero : " << endl;
  cin >> a >> b;        
  }

    int tablero [a][b];
    
    for (int i=1; i<=5; i++){
      cout << " El barco " << i << " ocupa " << " " << i << "casillas" << endl;
    }

    cout << 

    


    for (int i=1; i<=8; )
} 