#include "juego.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


Juego::Juego(){
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
}

void Juego::batallaJ1(char (*tableroJ2)[9], char (*tableroM)[9]){
    int contador1=0, contador3=0;

   //jugador 1
   //contador = 18
   
   //if(opcion = 1){}
    if(tableroJ2[f][c] == 'x'){
        contador1++;
        tableroJ2[f][c] = 'o';
    
    }else if (tableroJ2[f][c] == '.' || tableroJ2[f][c] == 'o'){
        void batallaJ2();
    }

    DisparosJ1[f][c] = 'o';
    
    cout << "Disparos J1" << endl;
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout<< DisparosJ1 [i][j] << " ";  
    }
    cout << "\n";
  }



//if (opcion = 2){}
    
    if(tableroM[f][c] == 'x'){
        contador3++;
        tableroM[f][c] = 'o';
    
    }else if (tableroM[f][c] == '.' || tableroM[f][c] == 'o'){
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

void Juego::batallaJ2(char (*tableroJ1)[9]){
    int contador2=0;

    // contador = 18
    if(tableroJ1[f][c] == 'x'){
        contador2++;
        tableroJ1[f][c] = 'o';
    
    }else if (tableroJ1[f][c] == '.' || tableroJ1[f][c] == 'o'){
        void batallaJ1();
    }

    DisparosJ2[f][c] = 'o';
    cout << "Disparos J2" << endl;
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << DisparosJ2 [i][j] << " ";  
    }
    cout << "\n";
  }
}

void Juego::batallaM(char (*tableroJ1)[9]){
    int contador4=0;

    // contador = ni idea
    srand(time(NULL));
    f= rand()% 9;
    c= rand()% 9;
    
    if(tableroJ1[f][c] == 'x'){
        contador4++;
        tableroJ1[f][c] = 'o';
    
    }else if (tableroJ1[f][c] == '.' || tableroJ1[f][c] == 'o'){
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
    



    

