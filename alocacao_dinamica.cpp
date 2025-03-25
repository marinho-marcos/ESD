#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using std::string;

int main(){
    // int *ptr;

    // ptr = (int*) malloc(sizeof(int));

    // *ptr = 10;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // free(ptr);

    // ALOCANDO ARRAY DE INTEIROS DE FORMA DINAMICA
    int tam;

    cout << "Informe o tamanho do array: " << endl;
    cin >> tam;

    int *arr = (int*) malloc(tam * sizeof(int));

    for(int i = 0; i < tam; i++){
        cout << "Informe o elemento da posicao " << i+1 << ": ";
        cin >> arr[i]; 
    }

    cout << "\nValores aramazenados: " << endl;
    for(int i = 0; i < tamn; i++){
        cout << arr[i] << " ";
    }

    free(arr);


    //ALOCANDO ARRAY DE FLOATS DE FORMA DINAMICA
    int tam2;

    cout << "Informe o tamanho do array: " << endl;
    cin >> tam2;

    float *arr2 = (float*) malloc(tam * sizeof(float));

    for(int i = 0; i < tam2; i++){
        cout << "\nInforme o numero da posicao " << i+1 << ": " << endl;
        cin >> arr2[i];
    }

    cout << "\nValores inseridos: " << endl;

    for(int i = 0; i < tam2; i++){
        cout << arr2[i] << " ";
    }

    free(arr2);

    return 0;
}