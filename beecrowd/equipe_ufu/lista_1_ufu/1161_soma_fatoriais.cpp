#include <iostream>
using namespace std;

int main(){
    int n, m;

    while(cin >> n >> m){

    unsigned long long fat_n=1, fat_m=1, soma=0;
    
    for(int i=n; i>=1; i--){
        fat_n*=i;
    }

    for(int i=m; i>=1; i--){
        fat_m*=i;
    }

    soma = fat_n+fat_m;
    cout<<soma<<endl;
}

    return 0;
}