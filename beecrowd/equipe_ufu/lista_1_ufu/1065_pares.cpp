#include <iostream>
using namespace std;

int main(){
    int numero, contador=0;

    for(int i=0; i<5; i++){
        cin>>numero;

        if(numero%2==0){
            contador++;
        }
    }

    cout<<contador<<" valores pares"<<endl;


    return 0;
}