#include <iostream>

using namespace std;

int main() {
    int vetor1[5], vetor2[5], intersecao[5] = {0}; // Inicializa todas as posições com 0
    int tam_intersecao = 0;

    // Preenchendo o primeiro vetor
    cout << "Digite 5 numeros para o primeiro vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor1[i];
    }

    // Preenchendo o segundo vetor
    cout << "Digite 5 numeros para o segundo vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor2[i];
    }

    // Encontrando a interseção dos dois vetores
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (vetor1[i] == vetor2[j]) {
                // Verificar se o número já foi adicionado à interseção
                int jaExiste = 0; // 0 = falso, 1 = verdadeiro
                for (int k = 0; k < tam_intersecao; k++) {
                    if (intersecao[k] == vetor1[i]) {
                        jaExiste = 1; // Número já existe
                        break;
                    }
                }
                if (jaExiste == 0) { // Adicionar número à interseção
                    intersecao[tam_intersecao] = vetor1[i];
                    tam_intersecao++;
                }
            }
        }
    }

    // Exibindo os resultados
    cout << "Interseção dos dois vetores: ";
    if (tam_intersecao == 0) {
        cout << "Nenhum elemento em comum." << endl;
    } else {
        for (int i = 0; i < tam_intersecao; i++) {
            cout << intersecao[i] << " ";
        }
        cout << endl;
    }

    return 0;
}