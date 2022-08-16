// Ejercicio 9 TP 1
/*
 Hacer una funci�n que reciba dos cadenas de caracteres y verifique si todos los caracteres
 de la segunda cadena se encuentran dentro de la primera.
 Por ejemplo, si se env�a "LABORATORIO" y "LARA" la funci�n debe devolver verdadero.
 En cambio, si se env�a "LABORATORIO" y "ANGEL" la funci�n debe devolver falso.

 CUNAS - AZUL

 NOTA: La funci�n no debe recibir el tama�o de ninguna de las cadenas.
 NOTA 2: La funci�n debe resolver lo pedido sin importar si las cadenas se env�an
 con may�sculas, min�sculas o combinaciones. Ejemplo: "Laboratorio" y "LARA" debe
 devolver verdadero.
*/

#include <iostream>
#include<cstring>
using namespace std;


//Funciones
int coincide(string texto1, string texto2){
    //cout << "texto 1: " << texto1 <<endl;
    //cout << "texto 2: " << texto2<<endl;

    for(int i=0; i<texto1.length(); i++){

        for(int j=0; j<texto2.length(); j++) {
            if(texto2[j] == texto1[i]){
                cout << "coincide" <<endl;
            }
        }
    }
}


int main(){

    string texto1, texto2;

    cout << "Ingrese primer cadena de caracteres: ";
    cin >> texto1;
    cout << "Ingrese segunda cadena de caracteres: ";
    cin >> texto2;


    coincide(texto1, texto2);


    return 0;
}
