#include "./barcoJ1.h"
#include <iostream>
using namespace std;

Barco::Barco (){
  tableroJ1=new char[9][9];
   for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      tableroJ1 [i][j]= '.'; 
    }
  }
}
Barco::~Barco (){
  delete[] tableroJ1;
}


void Barco::ingresarPosicion (){  
    

    int f = 0, c = 0;

    
    for (int i=1; i<=4; i++){
      cout << " El barco " << i << " ocupa " << " " << i << "casillas" << endl;
    }

    for(int i=1; i<=4; i++){
      

      if(i==1){
        cout << "ingrese coordenadas del barco 1:" << endl;
        cin >> f >> c;
        tableroJ1 [f][c] = 'x';
      }
      
      int d=0;

      if(i==2){
 
        
        while (d<2){

            cout << "ingrese coordenadas del barco 2:" << endl;
            

        for(int j=0; j<2; j++){
           
            cin >> f >> c;
            tableroJ1 [f][c] = 'x';
        }
        d++;
        }
      }

     
      if(i==3){

        while(d<3){

          cout << "ingrese coordenadas del barco 3:" << endl;
          for(int j=0; j<3; j++){
            cin >> f>> c;
            tableroJ1 [f][c] = 'x';
          }
          d++;
        }
      }
      if(i==4){
        cout << "ingrese coordenadas del barco 4:" << endl;
        for(int j=0; j<4; j++){
            cin >> f >> c;
            tableroJ1 [f][c] = 'x';
          }

    
      }
    }
}

void Barco::mostrar(){

  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << tableroJ1 [i][j] << "  ";  
    }
    cout <<" \n";
  }
}             