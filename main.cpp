#include <iostream>
using namespace std;

#include "src/BARCOJ2/barcoJ2.h"
#include "src/MAQUINA/maquina.h"


int main(){

    Barco2 B2;
   
   // Maquina M;

   //B1.ingresarPosicion();

    B2.ingresarPosicion2();
    B2.mostrar2();
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << B2.gettableroJ1();
    }
  }

   // B2.mostrar2();




}

