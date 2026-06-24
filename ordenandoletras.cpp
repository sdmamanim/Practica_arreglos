#include<iostream>
using namespace std;

int main(){

    string texto;
    char letras[100];
    int cantidad = 0;

    if( getline(cin,texto)){

        for(int i=0; i< texto.length(); i++){

            if( texto[i] >='a' && texto[i]<='z'){
                letras[cantidad] = texto[i];
                cantidad++;
            }
        }
    }
}