#include<iostream>
using namespace std;

int main(){
    int N, C, destino ;
    cin>>N>>C;

    int vasos[1000] = {0};

    while( C>0 ){
        C = C-1;
        cin>>destino;

        if(destino>=1 && destino<=N ){
            vasos[destino]++;
        }
    }

    for( int i=1; i<=N; i++){
        cout<<vasos[i]<<endl;

    }
    return 0;
}