#include <iostream>

using namespace std;

#include "src/BARCOJ2/barcoJ2.h"
#include "src/MAQUINA/maquina.h"


int main(){


    Barco2 B2;

    int opcion;

    //objetos 
    Barco B1;
    Barco2 B2;
    Maquina M;

   


   //B1.ingresarPosicion();

    B2.ingresarPosicion2();
    B2.mostrar2();
    for (int i=0; i<9; i++){
    for (int j=0; j<9; j++){
      cout << B2.gettableroJ1();
    }
  }


   // B2.mostrar2();

    cout << "\n";
   cout 
   << "                       ########     ###    ########    ###    ##       ##          ###       ##    ##    ###    ##     ##    ###    ## \n"      
      "                       ##     ##   ## ##      ##      ## ##   ##       ##         ## ##      ###   ##   ## ##   ##     ##   ## ##   ## \n"     
      "                       ##     ##  ##   ##     ##     ##   ##  ##       ##        ##   ##     ####  ##  ##   ##  ##     ##  ##   ##  ## \n"    
      "                       ########  ##     ##    ##    ##     ## ##       ##       ##     ##    ## ## ## ##     ## ##     ## ##     ## ## \n"
      "                       ##     ## #########    ##    ######### ##       ##       #########    ##  #### #########  ##   ##  ######### ## \n"
      "                       ##     ## ##     ##    ##    ##     ## ##       ##       ##     ##    ##   ### ##     ##   ## ##   ##     ## ## \n"
      "                       ########  ##     ##    ##    ##     ## ######## ######## ##     ##    ##    ## ##     ##    ###    ##     ## ######## \n";

   cout << "\n";
   cout << "                                            Seleccione una opcion de juego : ";
   cout << "\n";
   cout << "                                            1.  Jugador 1 vs Jugador 2" << endl;
   cout << "                                            2.  Jugador vs Maquina " << endl; 
   cin >> opcion;

   if (opcion == 1){

    cout << " Jugador 1 : " << endl;
    cout << " Ingrese las coordenadas de sus barcos : " << endl;
    B2.ingresarPosicion();
    B2.mostrar(); 
    cout << "\n";
    cout << " Jugador 2 :" << endl;
    cout << " Ingrese las coordenadas de sus barcos :  " << endl;
    B2.ingresarPosicion2();
    B2.mostrar2();
     cout << "\n";

     cout << " Momento del ataque : Jugador 1  " << endl;
     cout << " Ingrese las posiciones a atacar : " << endl;
     //llamar a la funcion 

     
     cout << " Momento del ataque : Jugador 2  " << endl;
     cout << " Ingrese las posiciones a atacar : " << endl;
     //llamar funcion de ataque 2 ; 

   }

   else if (opcion == 2){
     cout << " Jugador 1 : " << endl;
    cout << " Ingrese las coordenadas de sus barcos : " << endl;
    M.ingresarPosicion();
    M.mostrar();

    M.ingresarPosicionM();
    M.mostrarM();


   }






}

