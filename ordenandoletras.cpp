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
        
        for( int i=0; i<cantidad -1; i++){
            for( int j=0; j<cantidad -1; j++){

                if(letras[j] > letras[j+1]){
                    char temp = letras[j];
                    letras[j]= letras[j + 1];
                    letras[j + 1] = temp;
                }
            }
        }

    }
}