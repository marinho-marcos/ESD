#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct elemento{
    int valor;
    struct elemento *proximo;
}ELEMENTO;

ELEMENTO *cabeca = NULL;

void criarLista(){
    if(cabeca != NULL){
        cout << "lista ja criada\n";
    }else{
        cabeca = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(cabeca == NULL){
            cout << "erro de alocação\n";
        }else{
            cout << "Informe o valor do primeiro elemento: ";
            cin >> cabeca->valor;
            cabeca->proximo = cabeca;
        }
    }
}

void inserirInicio(){
    if(cabeca == NULL){
        cout << "lista vazia" << endl;
        criarLista();
        return;
    }else{
        ELEMENTO *novo = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(novo == NULL){
            cout << "erro de alocação\n";
        }else{
            cout << "Informe o valor do novo elemento: ";
            cin >> novo->valor;
            
            ELEMENTO *temp = cabeca;
            while(temp->proximo != cabeca){
                temp = temp->proximo;
            }
            
            novo->proximo = cabeca;
            temp->proximo = novo;
            cabeca = novo;
        }
    }
}

void removerElemento(){
    if(cabeca == NULL){
        cout << "\nlista vazia. nada para remover" << endl;
        return;
    }
    
    ELEMENTO *anterior = NULL;
    ELEMENTO *atual = cabeca;
    
    int valor;
    cout << "\nInforme o elemento que deseja remover: ";
    cin >> valor;
    
    if(cabeca->valor == valor){
        if(cabeca->proximo == cabeca){
            free(cabeca);
            cabeca = NULL;
        }else{
            ELEMENTO *ultimo = cabeca;
            while(ultimo->proximo != cabeca){
                ultimo = ultimo->proximo;
            }
            
            ELEMENTO *temp = cabeca;
            cabeca = cabeca->proximo;
            ultimo->proximo = cabeca;
            free(temp);
        }
        cout << "\nElemento " << valor << " removido!" << endl;
        return;
    }
    
    while(atual->proximo != cabeca && atual->valor != valor){
        anterior = atual;
        atual = atual->proximo;
    }
    
    if(atual->valor == valor){
        anterior->proximo = atual->proximo;
        free(atual);
        cout << "\nElemento " << valor << " removido!" << endl;
    }else{
        cout << "\no elemento informado não foi encontrado" << endl;
    }
}

void inserirFinal(){
    if(cabeca == NULL){
        cout << "lista vazia" << endl;
        criarLista();
        return;
    }else{
        ELEMENTO *novo = (ELEMENTO*) malloc(sizeof(ELEMENTO));
        if(novo == NULL){
            cout << "erro de alocação\n";
        }else{
            cout << "Informe o valor do novo elemento: ";
            cin >> novo->valor;
            
            ELEMENTO *temp = cabeca;
            while(temp->proximo != cabeca){
                temp = temp->proximo;
            }
            
            temp->proximo = novo;
            novo->proximo = cabeca;
        }
    }
}

void exibirLista(){
    if(cabeca == NULL){
        cout << "\nLista vazia. nada para exibir" << endl;
    } else{
        ELEMENTO *atual = cabeca;
        do{
            cout << atual->valor << " -> ";
            atual = atual->proximo;
        }while(atual != cabeca);
        cout << "volta para (" << cabeca->valor << ")" << endl;
    }
}

int main() {
    criarLista();
    inserirFinal();
    inserirFinal();
    
    exibirLista();
    
    removerElemento(3);
    
    exibirLista();

    return 0;
}