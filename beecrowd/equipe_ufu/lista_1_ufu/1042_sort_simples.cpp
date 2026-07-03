#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, aux1, aux2, aux3, aux;

    cin>>n1>>n2>>n3;
    aux1 = n1;
    aux2 = n2;
    aux3 = n3;

    //Crescente
    if(n1>n2){
        aux = n2;
        n2 = n1;
        n1 = aux;
    }
    if(n2>n3){
        aux = n3;
        n3 = n2;
        n2 = aux;
    }
    if(n1>n2){
        aux = n2;
        n2 = n1;
        n1 = aux;
    }

    cout<<n1<<endl<<n2<<endl<<n3;

    //Espaco em branco
    cout<<endl<<endl;

    //Sequencia de leitura
    cout<<aux1<<endl<<aux2<<endl<<aux3<<endl;


    return 0;
}