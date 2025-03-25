#include <iostream>

using namespace std;

void inverteVetor(int vetor[], int tamanho){
    int vetorCopia[tamanho];

    for(int i = 0; i < tamanho; i++){
        vetorCopia[i] = vetor[i];
    }

    for(int i = 0, j = 4; i < tamanho; i++, j--){
        vetor[i] = vetorCopia[j]; 
    }
}

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++){
        cout << "\nInforme o elemento da posicao " << i+1 << ":" << endl;
        cin >> vetor[i];
    }

    inverteVetor(vetor, 5);

    cout << "\nVetor invertido:\n";
    cout << "-----------------\n";
    for(int i = 0; i < 5; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}