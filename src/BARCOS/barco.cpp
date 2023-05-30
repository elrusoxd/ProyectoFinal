#include "./barco.h"
#include <iostream>
using namespace std;

Barco::Barco (int _a, int _b, char _tablero[9][9]){
  a =_a;
  b = _b;
  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      _tablero [i][j]= ' ';
      tablero [i][j]= _tablero[i][j];
    }
  }
}

void Barco::setA(int _a){
  a = _a;
}
void Barco::setB(int _b){
  b = _b;
}
void Barco::setTablero(char _tablero[9][9]){
 for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      tablero [i][j]= _tablero [i][j];
}
 }
}

int Barco::getA(){return a;}
int Barco::getB(){return b;}
char Barco::getTablero(){return tablero [9][9];}




void Barco::ingresarPosicion (){  
    

    int f = 0, c = 0;

    
    for (int i=1; i<=4; i++){
      cout << " El barco " << i << " ocupa " << " " << i << "casillas" << endl;
    }

    for(int i=1; i<=4; i++){
      

      if(i==1){
        cout << "ingrese coordenadas del barco 1:" << endl;
        cin >> f >> c;
        tablero [f][c] = 'x';
      }
      
      int d=0;

      if(i==2){
 
        
        while (d<2){

        for(int j=0; j<2; j++){
            cout << "ingrese coordenadas del barco 2:" << endl;
            cin >> a >> b;
            tablero [f][c] = 'o';
        }
        d++;
        }
      }

     
      if(i==3){

        while(d<3){
          for(int j=0; j<3; j++){

            cout << "ingrese coordenadas del barco 3:" << endl;
            cin >> f>> c;
            tablero [f][c] = '#';
          }
          d++;
        }
      }
      if(i==4){
        for(int j=0; j<4; j++){
            cout << "ingrese coordenadas del barco 4:" << endl;
            cin >> f >> c;
            tablero [f][c] = '&';
          }

    
      }
    }
}

void Barco::mostrar(){

  for (int i=0; i<=a; i++){
    for (int j=0; j<=b; j++){
      cout << tablero [a][b];  
    }
  }
}             

