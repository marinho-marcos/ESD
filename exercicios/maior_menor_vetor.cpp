//Aqui está o programa que lê 10 números inteiros, armazena-os em um vetor e determina o maior e o menor número entre eles.

// INICIO DAS DIRETIVAS DO COMPILADOR
#include <iostream>  // para cin e cout

using namespace std;

// int main() {
//     int vetor[10];  // Declaração do vetor de inteiros com 10 posições
//     int maior, menor;

//     // Preenchendo o vetor com valores informados pelo usuário
//     cout << "Digite 10 numeros inteiros:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << "Numero " << i + 1 << ": ";
//         cin >> vetor[i];
//     }

//     // Inicializando maior e menor com o primeiro valor do vetor
//     maior = vetor[0];
//     menor = vetor[0];

//     // Determinando o maior e o menor número no vetor
//     for (int i = 1; i < 10; i++) {
//         if (vetor[i] > maior) {
//             maior = vetor[i];
//         }
//         if (vetor[i] < menor) {
//             menor = vetor[i];
//         }
//     }

//     // Exibindo o maior e o menor número
//     cout << "O maior numero eh: " << maior << endl;
//     cout << "O menor numero eh: " << menor << endl;

//     return 0;
// }

//RESOLUÇÃO UTILIZANDO FUNÇÃO EXTERNA + PASSAGEM POR REFERENCIA (C++):
// #include <iostream>  // para cin e cout

// using namespace std;

// // Função para encontrar o maior e o menor número no vetor
// void encontraMaiorMenor(int vetor[], int tamanho, int &maior, int &menor) {
//     // Inicializa maior e menor com o primeiro valor do vetor
//     maior = vetor[0];
//     menor = vetor[0];

//     for (int i = 1; i < tamanho; i++) {
//         if (vetor[i] > maior) {
//             maior = vetor[i];
//         }
//         if (vetor[i] < menor) {
//             menor = vetor[i];
//         }
//     }
// }

// int main() {
//     int vetor[10];  // Declaração do vetor de inteiros com 10 posições
//     int maior, menor;

//     // Preenchendo o vetor com valores informados pelo usuário
//     cout << "Digite 10 numeros inteiros:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << "Numero " << i + 1 << ": ";
//         cin >> vetor[i];
//     }

//     // Chamando a função para encontrar o maior e menor número
//     encontraMaiorMenor(vetor, 10, maior, menor);

//     // Exibindo o maior e o menor número
//     cout << "O maior numero eh: " << maior << endl;
//     cout << "O menor numero eh: " << menor << endl;

//     return 0;
// }


//RESOLUÇÃO UTILIZANDO FUNÇÃO EXTERNA + PASSAGEM POR REFERENCIA EM C:

// Definição da função com ponteiros
void encontraMaiorMenor(int vetor[], int tamanho, int * maior, int * menor) {
    *maior = vetor[0];  // Inicializa o valor usando desreferência
    *menor = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];  // Atualiza o valor usando desreferência
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int vetor[10];  // Declaração do vetor de inteiros com 10 posições
    int maior, menor;

    // Preenchendo o vetor com valores informados pelo usuário
    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Chamando a função para encontrar o maior e menor número
    encontraMaiorMenor(vetor, 10, &maior, &menor);  // Passando o endereço das variáveis

    // Exibindo o maior e o menor número
    cout << "O maior numero eh: " << maior << endl;
    cout << "O menor numero eh: " << menor << endl;

    return 0;
}