#include "juego.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


Juego::Juego():B1(), B2(),M(){
    DisparosJ1=new char[9][9];
    DisparosJ2=new char[9][9];
    DisparosM= new char[9][9];

   for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      DisparosJ1[i][j]= '.'; 
      DisparosJ2[i][j]= '.';
      DisparosM[i][j]= '.';
    }
  }
}

Juego::~Juego(){
  delete [] DisparosJ1;
  delete [] DisparosJ2;
  delete [] DisparosM;
}


void Juego::setO(int _opcion){opcion=_opcion;}
void Juego::setcontador1(int _contador1){contador1= _contador1;}
void Juego::setcontador2(int _contador2){contador2= _contador2;}


int Juego::getO(){return opcion;}
int Juego::getcontador1(){return contador1;}
int Juego::getcontador2(){return contador2;}

void Juego::batallaJ1(){
  
   //jugador 1
   //contador = 18
    
    if(opcion == 1){
      cout << " Ingrese las posiciones a atacar : " << endl;
      cin >> f >> c;
      DisparosJ1[f][c] = 'o';
      /*cout << "Disparos J1" << endl;
      for (int i=0; i<9; i++){
      for (int j=0; j<9; j++){
      cout<< DisparosJ1 [i][j] << " ";  
     }
    cout << "\n";
    }*/
    

    if(B2.tableroJ2[f][c] == 'x'){
        contador1++;
        B2.tableroJ2[f][c] = 'o';
    }
    
    for (int i=0; i<9; i++){
      for (int j=0; j<9; j++){
      cout<< B2.tableroJ2 [i][j] << " ";  
     }
    cout << "\n";
    }

    }

  
    


 if (opcion == 2){
    
    if(M.tableroM[f][c] == 'x'){
        contador3++;
        M.tableroM[f][c] = 'o';
    
    }else if (M.tableroM[f][c] == '.' || M.tableroM[f][c] == 'o'){
        void batallaM();
    }
    
    DisparosJ1[f][c] = 'o';
    cout << "Disparos J1" << endl;
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout<< DisparosJ1 [i][j] << " ";  
    }
    cout << "\n";
  }
 }
}             

void Juego::batallaJ2(){

    // contador = 18
    cout << "Turno del jugador 2 : " << endl;
      cout << " Ingrese las posiciones a atacar : " << endl;
        cin >> f >> c;
      DisparosJ2[f][c] = 'o';
      cout << "Disparos J2" << endl;
      for (int i=0; i<9; i++){
      for (int j=0; j<9; j++){
      cout << DisparosJ2 [i][j] << " ";  
      }
      cout << "\n";
    }

    if(B1.tableroJ1[f][c] == 'x'){
        contador2++;
       B1.tableroJ1[f][c] = 'o';
    }

    
    
    
}

void Juego::batallaM(){

    // contador = ni idea
    srand(time(NULL));
    f= rand()% 9;
    c= rand()% 9;
    
    if(B1.tableroJ1[f][c] == 'x'){
        contador4++;
        B1.tableroJ1[f][c] = 'o';
    
    }else if (B1.tableroJ1[f][c] == '.' || B1.tableroJ1[f][c] == 'o'){
        void batallaJ1();
    }

    DisparosM[f][c] = 'o';
    cout << "Disparos PC" << endl;
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << DisparosM[i][j] << " ";  
    }
    cout << "\n";
  }
}
    



    

