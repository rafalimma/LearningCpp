#include <iostream>

using namespace std;
int main(){
    int tam=5;
    int vetor[tam]={10, 20, 30, 40, 50};//10 posições
    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;
    for(int i=0;i < tam ; i++){
        cout << vetor[i] << '\n';
    }
    return 0;
}