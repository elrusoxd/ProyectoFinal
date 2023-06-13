#include <iostream>

using namespace std;

#include "src/JUEGO/juego.h"


int main(){
    int opcion, contador1, contador2;

    //objetos 
    Barco B1;
    Barco2 B2;
    Maquina M;
    Juego J;
 

    cout << "\n";
   cout <<
      "                       ########     ###    ########    ###    ##       ##          ###       ##    ##    ###    ##     ##    ###    ## \n"      
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
     
     while(contador1<=)

     
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

