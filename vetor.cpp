#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#define TAM 3

using namespace std;

int main(){
    float notas[TAM];
    int i;

    for(i = 0; i < TAM; i++) {
        cout << "Insira a nota " << i+1 << endl;
        cin >> notas[i];
    }

    cout << "\n";

    for(i = 0; i < TAM; i++) {
        cout << "nota " << i+1 << "= " << notas[i] << endl;
    }

    return 0;
}