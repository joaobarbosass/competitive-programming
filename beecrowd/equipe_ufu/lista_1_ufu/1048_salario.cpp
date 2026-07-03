#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int percentual;
    float salario, novo_salario;
    
    cin>>salario;

    if(salario>2000){
        novo_salario = salario * 1.04;
        percentual = 4;
    }
    else if(salario>1200){
        novo_salario = salario * 1.07;
        percentual = 7;
    }
    else if(salario>800){
        novo_salario = salario * 1.10;
        percentual = 10;
    }
    else if(salario>400){
        novo_salario = salario * 1.12;
        percentual = 12;
    }
    else{
        novo_salario = salario * 1.15;
        percentual = 15;
    }

    cout << fixed << setprecision(2);
    cout<<"Novo salario: "<<novo_salario<<endl;
    cout<<"Reajuste ganho: "<<novo_salario-salario<<endl;
    cout<<"Em percentual: "<<percentual<<" %"<<endl;

    return 0;
}