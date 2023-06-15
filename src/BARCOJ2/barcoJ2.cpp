#include "./barcoJ2.h"
#include <iostream>
using namespace std;

Barco2::Barco2 ():Barco() {

   tableroJ2 = new char[9][9];
  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      tableroJ2 [i][j]= '.';
    }
  }
}
Barco2::~Barco2(){
  delete [] tableroJ2;
}
int Barco2::getTableroJ2(){return (*tableroJ2)[9];}

void Barco2::ingresarPosicion2 (){  
  
  
    int f = 0, c = 0;

    
    for (int i=1; i<=4; i++){
      cout << " El barco " << i << " ocupa " << " " << i << "casillas" << endl;
    }

    for(int i=1; i<=4; i++){
      

      if(i==1){
        cout << "ingrese coordenadas del barco 1:" << endl;
        cin >> f >> c;
        tableroJ2 [f][c] = 'x';
      }
      
      int d=0;

      if(i==2){
 
        
        while (d<2){

        for(int j=0; j<2; j++){
            cout << "ingrese coordenadas del barco 2:" << endl;
            cin >> f >> c;
            tableroJ2 [f][c] = 'x';
        }
        d++;
        }
      }

     
      if(i==3){

        while(d<3){
          for(int j=0; j<3; j++){

            cout << "ingrese coordenadas del barco 3:" << endl;
            cin >> f>> c;
            tableroJ2 [f][c] = 'x';
          }
          d++;
        }
      }
      if(i==4){
        for(int j=0; j<4; j++){
            cout << "ingrese coordenadas del barco 4:" << endl;
            cin >> f >> c;
            tableroJ2 [f][c] = 'x';
          }

    
      }
    }
}

void Barco2::mostrar2(){

  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << " " << tableroJ2 [i][j] ;  
    }
    cout << "\n";
  }
}             
