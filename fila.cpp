#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no {
    int valor;
    struct no *proximo;
} NO;

NO *fila = NULL;
NO *final = NULL;

void enfileirar() {
    NO *novo = (NO*) malloc(sizeof(NO));
    if (novo == NULL) {
        cout << "Erro ao alocar memória!" << endl;
        return;
    }

    cout << "Informe o valor do novo elemento da fila: ";
    cin >> novo->valor;
    novo->proximo = NULL;

    if (fila == NULL) { // Se a fila estiver vazia, novo nó será o primeiro
        fila = novo;
        final = novo;
    } else {
        final->proximo = novo;
        final = novo;
    }
}

void desenfileirar() {
    if (fila == NULL) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << fila->valor << " removido da fila com sucesso!" << endl;
    NO *temp = fila;
    fila = fila->proximo;
    free(temp);

    if (fila == NULL) { // Se a fila ficou vazia, resetamos `final`
        final = NULL;
    }
}

void liberarFila(){
    if(fila == NULL){
        cout << "Fila vazia!" << endl;
        return;
    }
    
    NO *atual = fila;
    while(atual != NULL){
        NO *primeiro = atual;
        atual = atual->proximo;
        free(primeiro);
    }
    
    if(atual == NULL){
        fila = NULL;
        cout << "\nTodos os elementos da fila foram removidos." << endl;
    }
}

void exibirFila() {
    if (fila == NULL) {
        cout << "Fila vazia!" << endl;
        return;
    }

    cout << "\nFila: ";
    NO *atual = fila;
    while (atual != NULL) {
        cout << atual->valor << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL\n";
}

int main() {
    enfileirar();
    enfileirar();

    exibirFila();

    desenfileirar();
    exibirFila();

    desenfileirar();
    exibirFila();

    enfileirar();
    exibirFila();

    return 0;
}
