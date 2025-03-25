#include <iostream>

using namespace std;

void somaVetores(int *vetor1, int *vetor2, int *vetor3, int tamanho){

    for(int i = 0; i < tamanho; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }
}

int main(){
    int vetor1[5], vetor2[5], vetor3[5];

    cout << "\nPreencha o primeiro vetor com numeros inteiros!" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\nInforme o numero da posicao " << i+1 << ":" << endl;
        cin >> vetor1[i];
    }

    cout << "\nPreencha o segundo vetor com numeros inteiros!" << endl;
    for(int i = 0; i < 5; i++){
        cout << "\nInforme o numero da posicao " << i+1 << ":" << endl;
        cin >> vetor2[i];
    }

    somaVetores(vetor1, vetor2, vetor3, 5);

    cout << "\nNovo vetor com valores somados: " << endl;
    cout << "-----------------------------------" << endl;
    for(int i = 0; i < 5; i++){
        cout << vetor3[i] << " ";
    }

    return 0;
}