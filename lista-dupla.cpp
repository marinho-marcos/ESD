#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using std::string;

typedef struct elemento{
    int valor;
    struct elemento *anterior;
    struct elemento *proximo;
} ELEMENTO;

ELEMENTO *listaDupla = NULL;

void criarLista(){
    if(listaDupla != NULL){
        cout << "\nLista ja existente" << endl;
    }else{
        listaDupla = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(listaDupla == NULL){
            cout << "erro ao alocar memoria" << endl;
        }else{
            cout << "\nInforme o valor do primeiro elemento: " << endl;
            cin >> listaDupla->valor;
            listaDupla->proximo = NULL;
            listaDupla->anterior = NULL;
        }
    }
}

void adicionarInicio(){
    if(listaDupla == NULL){
        cout << "\nLista vazia";
        criarLista();
    }else{
        ELEMENTO *novo = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(novo == NULL){
            cout << "erro ao alocar memoria" << endl;
        }else{
            cout << "\nInforme o valor do novo elemento: " << endl;
            cin >> novo->valor;
            novo->proximo = listaDupla;
            novo->anterior = NULL;
            listaDupla->anterior = novo;
            listaDupla = novo;
        }
    }
}

void adicionarFinal(){
    if(listaDupla == NULL){
        cout << "\nLista vazia";
        criarLista();
    }else{
        ELEMENTO *novo = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(novo == NULL){
            cout << "erro ao alocar memoria" << endl;
        }else{
            cout << "\nInforme o valor do novo elemento: " << endl;
            cin >> novo->valor;
            novo->proximo = NULL;

            ELEMENTO *temp = listaDupla;
            while(temp->proximo != NULL){
                temp = temp->proximo;
            }

            temp->proximo = novo;
            novo->anterior = temp;
        }
    }
}

void removerElemento(){
    if(listaDupla == NULL){
        cout << "\nLista vazia. nada para remover!" << endl;
        return;
    }

    int x;
    cout << "\nInforme o valor a ser removido: " << endl;
    cin >> x;

    ELEMENTO *temp = listaDupla;
    
    while(temp != NULL && temp->valor != x){
        temp = temp->proximo;
    }

    if(temp == NULL){
        cout << "\nvalor não encontrado" << endl;
        return;
    }

    if(temp == listaDupla){
        listaDupla = temp->proximo;
        if(listaDupla != NULL){
            listaDupla->anterior = NULL;
        }
    }else{
        temp->anterior->proximo = temp->proximo;
        if(temp->proximo != NULL){
            temp->proximo->anterior = temp->anterior;
        } 
    }

    free(temp);
    cout << "\nO valor " << x << " foi removido com sucesso" << endl;
}

void exibirLista(){
    if(listaDupla == NULL){
        cout << "\nlista vazia!" << endl;
    }else{
        ELEMENTO *atual = listaDupla;
        while(atual != NULL){
            cout << atual->valor << " -> ";
            atual = atual->proximo;
        }
    }
}

void exibirListaInversa(){
    if(listaDupla == NULL){
        cout << "\nLista vazia, nada para exibir" << endl;
    }else{
        ELEMENTO *atual = listaDupla;
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        
        while(atual != NULL){
            cout << " <- " << atual->valor;
            atual = atual->anterior;
        }
    }
}

int main(){
    criarLista();
    adicionarFinal();
    adicionarFinal();

    cout << "\n-------------\n";
    exibirLista();
    
    removerElemento();
    
    cout << "\n-------------\n";
    exibirLista();
    
    return 0;
}