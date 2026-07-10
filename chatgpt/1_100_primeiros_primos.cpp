#include <iostream>
using namespace std;

int main(){
    int contador_numero_primos=0, numero=0, quantidade_divisores=0;

    while(contador_numero_primos<100){
        numero+=1;
        quantidade_divisores=0;

        for(int i=1; i<=numero; i++){
            if(numero%i==0){
                quantidade_divisores+=1;
            }
        }
        if(quantidade_divisores == 2){
            contador_numero_primos+=1;
            cout<<contador_numero_primos<<" - "<<numero<<endl;
        }
    }
    
    return 0;
}