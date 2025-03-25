#include <iostream>

using namespace std;

void inverteVetor(int *vetor, int tamanho){
    int vetorCopia[8];

    for(int i = 0; i < tamanho; i++){
        vetorCopia[i] = *(vetor + i);
    }

    for(int i = 0, j = 7; i < tamanho; i++, j--){
        *(vetor + i) = vetorCopia[j]; 
    }
}

int main(){
    int vetor[8];

    for(int i = 0; i < 8; i++){
        cout << "\nInforme o elemento da posicao " << i+1 << ":" << endl;
        cin >> vetor[i];
    }

    inverteVetor(vetor, 8);

    cout << "\nVetor invertido:\n";
    cout << "-----------------\n";
    for(int i = 0; i < 8; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}