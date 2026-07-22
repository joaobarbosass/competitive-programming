#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tamanho;
    
    cin>>tamanho;
    
    int contador = 0;
    vector<int> vetor(tamanho);

    for (int i = 0; i < tamanho; i++)
    {     
        cin>>vetor[i];
    }
    

    for (int i = 1; i < tamanho-1; i++)
    {
        if (vetor[i] > vetor[i-1] && vetor[i] > vetor[i+1])
        {
            contador += 1;
        }
    }
    
    cout << contador << '\n';
    return 0;
}