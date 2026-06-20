#include<iostream>
#include<string>
using namespace std;

bool comprobarPalindromo(string palabra ){

    int izquierda = 0;
    int derecha = palabra.length() - 1;
    
    while( izquierda < derecha ){

        if( palabra[izquierda] != palabra[derecha] ){
            return false;

        }
        izquierda = izquierda + 1;
        derecha = derecha - 1;
    }
    return true;
}









