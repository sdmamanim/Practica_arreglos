#include<iostream>
using namespace std;

int main(){

    int n, P, F;
    cin>>P>>n;

    int frecuencia[1000] = {0};

    while( n>0 ){
        n = n-1;
        cin>>F;

        if( F>=1 && F<=P ){
            frecuencia[F]++;
        }
    }

}