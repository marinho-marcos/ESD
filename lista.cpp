#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

typedef struct Telemento {
    int valor;
    struct Telemento *proximo;
} ELEMENTO;

ELEMENTO *listaSimples = NULL;

void criarLista() {
    if (listaSimples != NULL) {
        cout << "Ja existe uma lista criada\n";
    } else {
        listaSimples = (ELEMENTO *) malloc(sizeof(ELEMENTO));
        if (listaSimples == NULL) {
            cout << "Memoria Insuficiente\n";
        } else {
            // apontar o seu proximo para NULO
            listaSimples->proximo = NULL;
            cout << "Informe um valor:\n";
            cin >> listaSimples->valor;
        }
    }
}

void adicionarElementoInicio() {
    if (listaSimples == NULL) {
        criarLista();
    } else {
        ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));
        if (ptrtemp == NULL) {
            cout << "Memoria Insuficiente\n";
        } else {
            // apontar o seu proximo para NULO
            ptrtemp->proximo = NULL;
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;
            // Faça o proximo do ptrtemp apontar para o
            // primeiro elemento da lista, que é o
            // proprio ponteiro listaSimples
            ptrtemp->proximo = listaSimples;
            listaSimples = ptrtemp;
        }
    }
}

void adicionarElementoFim() {
    if (listaSimples == NULL) {
        criarLista();
    } else {
        ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));
        if (ptrtemp == NULL) {
            cout << "Memoria Insuficiente\n";
        } else {
            // apontar o seu proximo para NULO
            ptrtemp->proximo = NULL;
            cout << "Informe um valor:\n";
            cin >> ptrtemp->valor;
            ELEMENTO *temp = listaSimples;
            while (temp->proximo != NULL) {
                temp = temp->proximo;
            }
            // nesse ponto do codigo eu cheguei ao ultimo
            // ATUALIZAR TUDO
            temp->proximo = ptrtemp;
        }
    }
}

void exibirLista(){
    if(listaSimples == NULL){
        cout << "Lista vazia!\n";
    }else{
        ELEMENTO *temp = listaSimples;
        while(temp != NULL){
            cout << "Valor do elemento: " << temp->valor << endl;
            temp = temp->proximo;
        }
    }
}

void exibirListaInversa(ELEMENTO * elemento) {
    if (elemento == NULL) {
        return;  // Caso a lista seja vazia ou tenha chegado ao fim
    }

    // Recursão: vai até o final da lista
    exibirListaInversa(elemento->proximo);

    // Quando voltar das chamadas recursivas, imprime o valor do elemento
    cout << elemento->valor << " ";
}

int main() {
    adicionarElementoInicio();
    adicionarElementoFim();
    adicionarElementoFim();
    adicionarElementoFim();

    cout << "\n";

    exibirLista();

    cout << "\n";

    exibirListaInversa(listaSimples);

    return 0;
}