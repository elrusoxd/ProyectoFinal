#include <iostream>

using namespace std;

#include "src/JUEGO/juego.h"


int main(){
    int opcion, contador1=0, contador2=0,f,c, contador3=0;
    

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
   J.setO(opcion);

   if (opcion == 1){

    cout << " Jugador 1 : " << endl;
    cout << " Ingrese las coordenadas de sus barcos : " << endl;
    B1.ingresarPosicion();
    B1.mostrar(); 
    cout << "\n";
    cout << " Jugador 2 :" << endl;
    cout << " Ingrese las coordenadas de sus barcos :  " << endl;
    B2.ingresarPosicion2();
    B2.mostrar2();
     cout << "\n";
     

     cout << " Momento del ataque : Jugador 1  " << endl;
    while ((J.getcontador1()<=1) &&  (J.getcontador2()<=1)){
      J.batallaJ1();
      J.batallaJ2();
    }
     if (J.getcontador1()>J.getcontador2()){
      cout << " EL JUGADOR 1 GANO" << endl;
     }
     else {cout << "EL JUGADOR 2 GANO" << endl;}


     
     

     
    
  
     //llamar funcion de ataque 2 ; 

   }

   else if (opcion == 2){
     cout << " Jugador 1 : " << endl;
    cout << " Ingrese las coordenadas de sus barcos : " << endl;
    B1.ingresarPosicion();
    B1.mostrar();

    M.ingresarPosicionM();
    M.mostrarM();


   }






}

