#include <iostream>
using namespace std;

int main(){
    int contador=0;
    float numero;

    for(int i=0; i<6; i++){
        cin>>numero;

        if(numero>0){
            contador++;
        }
    }

    cout<<contador<<" valores positivos"<<endl;

    return 0;
}