#include <iostream>
#include <vector>
using namespace std;

int main(){
    int quantidade_numeros;
    vector<int> vetor_numeros;

    cin >> quantidade_numeros;

    int numero;
    for(int i = 0; i < quantidade_numeros; i++)
    {
        cin >> numero;
        vetor_numeros.push_back(numero);
    }

    int contagem = 0, final = 0;
    for (int i = 0; i < quantidade_numeros; i++)
    {
        if(i == 0){
            contagem = 1;
        }

        else if(vetor_numeros[i] > vetor_numeros[i-1]){
            contagem += 1;
        }

        else{
            contagem = 1;
        }

        if(contagem > final){
            final = contagem;
        }
    }
    
    cout<<final;

    return 0;
}