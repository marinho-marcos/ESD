#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no{
    int valor;
    struct no *noESQ;
    struct no *noDIR;
}NO;

NO *raiz = NULL;

void criarArvore(){
    if(raiz != NULL){
        cout << "Arvore ja criada." << endl;
        return;
    }

    raiz = (NO*) malloc(sizeof(NO));
    if(raiz == NULL){
        cout << "erro de alocação!" << endl;
    }else{
        cout << "Informe o valor da raiz: ";
        cin >> raiz->valor;

        raiz->noDIR = NULL;
        raiz->noESQ = NULL;
    }
}

void inserirELemento(){
    if(raiz == NULL){
        cout << "arvore vazia" << endl;
        criarArvore();
        return;
    }

    NO *novo = (NO*) malloc(sizeof(NO));
    if(novo == NULL){
        cout << "erro de alocação" << endl;
        return;
    }

    cout << "Informe o valor no novo elemento: ";
    cin >> novo->valor;
    novo->noDIR = NULL;
    novo->noESQ = NULL;

    NO *atual = raiz;
    NO *anterior = NULL;

    while(atual != NULL){
        anterior = atual;
        if(novo->valor < atual->valor){
            atual = atual->noESQ;
        }else{
            atual = atual->noDIR;
        }
    }

    if(novo->valor < anterior->valor){
        anterior->noESQ = novo;
    }else{
        anterior->noDIR = novo;
    }

    cout << "No " << novo->valor << " adicionado com sucesso!" << endl;
}

NO* buscar(NO *raiz, int valor){
    if(raiz == NULL){
        return NULL;
    }

    if(raiz->valor == valor){
        return raiz;
    }

    if(valor < raiz->valor){
        return buscar(raiz->noESQ, valor);
    }else{
        return buscar(raiz->noDIR, valor);
    }
}

void exibirPreOrdem(NO *raiz){
    if(raiz != NULL){
        cout << raiz->valor << " ";
        exibirPreOrdem(raiz->noESQ);
        exibirPreOrdem(raiz->noDIR);
    }
}

void exibirEmOrdem(NO *raiz){
    if(raiz != NULL){
        exibirEmOrdem(raiz->noESQ);
        cout << raiz->valor << " ";
        exibirEmOrdem(raiz->noDIR);
    }
}

void exibirPosOrdem(NO *raiz){
    if(raiz != NULL){
        exibirPosOrdem(raiz->noESQ);
        exibirPosOrdem(raiz->noDIR);
        cout << raiz->valor << " ";
    }
}

int main(){
    criarArvore();
    inserirELemento();
    inserirELemento();
    inserirELemento();
    inserirELemento();

    exibirEmOrdem(raiz);

    NO *temp = buscar(raiz, 120);

    if(temp == NULL){
        cout << "\nElemento " << temp->valor << " nao encontrado" << endl;
    }else{
        cout << "\nElemento " << temp->valor << " encontrado" << endl;
    }

    return 0;
}