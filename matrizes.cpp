#include <iostream>
using namespace std;

int main() {
    int matriz[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Acessando e imprimindo elementos da matriz
    cout << "Elemento na posição [0][0]: " << matriz[0][0] << endl;  // Imprime 1
    cout << "Elemento na posição [2][1]: " << matriz[2][1] << endl;  // Imprime 6

    // Modificando um elemento da matriz
    matriz[1][1] = 10;  // Altera o elemento na linha 1, coluna 1 para 10

    // Imprimindo a matriz atualizada
    for (int i = 0; i < 3; i++) {       // Loop pelas linhas
        for (int j = 0; j < 2; j++) {   // Loop pelas colunas
            cout << matriz[i][j] << " "; // Acessa cada elemento
        }
        cout << endl; // Quebra de linha após cada linha da matriz
    }

    return 0;
}
