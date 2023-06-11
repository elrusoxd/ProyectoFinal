#include "maquina.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

Maquina::Maquina ():Barco() {
  tableroM = new char[9][9];
   for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      tableroM [i][j]= '.';
    }
  }
}
Maquina::~Maquina(){
  delete [] tableroM;
}

void Maquina::ingresarPosicionM (){  
  int f, c, c2,f2,verticalhorizontal;

  srand(time(NULL));
    for(int i=1; i<=4; i++){

      if(i==1){ //un barco, una casilla
        f= rand()% 9;
        c= rand()% 9;
        tableroM [f][c] = 'x';
      }
      
     int d=0;

      if(i==2){ // dos barcos
       while (d<2){
          f= rand()% 9;
          c= rand()% 9;
          while (tableroM[f][c]=='x'){
             f= rand()% 9;
             c= rand()% 9;
          }
         tableroM [f][c] = 'x';

       verticalhorizontal = rand()% 2;
       // 1= horizontal 0= vertical
       if (verticalhorizontal == 1){
        c2= c+1;
      
        if (c2>8){
          c2= c-1;
        }
      
        if (tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
          }
       }

        if (verticalhorizontal == 0){

        f2= f+1;
        if (f2>8){
          f2= f-1;
        }
        if (tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
          }
        }
          d++;
        }
       }


       if(i==3){
       while (d<3){
        f= rand()% 9;
        c= rand()% 9;
        tableroM [f][c] = 'x';

       verticalhorizontal = rand()% 2;
       // 1= horizontal 0= vertical
       if (verticalhorizontal == 1){

        c2= c+2;
        if (c2>8){
          c2= c-1;
        }
        if (tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
          }
        c2= c+1;
        if(c2>8){
            c2= c-2;
          }
        if(tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
        }
       }


        if (verticalhorizontal == 0){

        f2= f+2;
        if (f2>8){
          f2= f-1;
        }
        if (tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
          }
        f2= f+1;
        if(f2>8){
            f2= f-2;
          }
        if(tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
        }
       }
        d++;
       }
    }



    if (i==4){
        while(tableroM[f][c] == 'x'){
          f= rand()% 9;
          c= rand()% 9;
        }
        tableroM [f][c] = 'x';

       verticalhorizontal = rand()% 2;
       // 1= horizontal 0= vertical
       if (verticalhorizontal == 1){

        c2= c+3;
        if (c2>8){
          c2= c-1;
        }
        if (tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
          }

        c2= c+2;
        if(c2>8){
            c2= c-2;
          }
        if(tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
        }
         c2= c+1;
        if(c2>8){
            c2= c-3;
          }
        if(tableroM[f][c2] == '.'){
          tableroM[f][c2] = 'x';
        }
       }
    

    if (verticalhorizontal == 0){

        f2= f+3;
        if (f2>8){
          f2= f-1;
        }
        if (tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
          }
        f2= f+2;
        if(f2>8){
            f2= f-2;
          }
        if(tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
        }
        f2= f+1;
        if(f2>8){
            f2= f-3;
          }
        if(tableroM[f2][c] == '.'){
          tableroM[f2][c] = 'x';
        }
       }
        
       }
    }
    
    }


void Maquina::mostrarM(){
  for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << tableroM [i][j] << " ";  
    }
    cout << "\n";
   
  }
}
      
      
     
    

