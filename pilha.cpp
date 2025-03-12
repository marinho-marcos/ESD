#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no{
   int valor;
   struct no *proximo;
}NO;

NO *topo = NULL;
NO *base = NULL;

void criarPilha(){
    if(topo != NULL){
        cout << "\nPilha já crida" << endl;
        return;
    }

    topo = (NO*) malloc(sizeof(NO));
    if(topo == NULL){
        cout << "\nErro de alocacao!" << endl;
        return;
    }

    cout << "Informe o valor do primeiro elemento da pilha: ";
    cin >> topo->valor;
    topo->proximo = NULL;
    base = topo;
}

void push(){
    if(topo == NULL){
        cout << "\nPilha vazia!" << endl;
        criarLista();
        return;
    }

    NO *novo = (NO*) malloc(sizeof(NO));
    if(novo == NULL){
        cout << "Erro de alocação" << endl;
        return;
    }
    
    cout << "\nInforme o valor do novo elemento da pilha: ";
    cin >> novo->valor;
    
    novo->proximo = topo;
    topo = novo;
    cout << "Elemento " << novo->valor << " adicionado ao topo da pilha." << endl;
}

void pop(){
    if(topo == NULL){
        cout << "\nErro. pilha vazia!" << endl;
        return;
    }
    
    NO *temp = topo;
    cout << "Elemento " << topo->valor << " removido da pilha.\n";
    topo = topo->proximo;
    free(temp);

    if(base == NULL){
        base = NULL;
    }
}

void exibirTopo(){
    if(topo == NULL){
        cout << "\nErro. pilha vazia." << endl;
        return;
    }
    
    cout << "\nTopo da pilha: " << topo->valor << endl;
}

void exibirBase(){
    if(base == NULL){
        cout << "\nErro. pilha vazia." << endl;
        return;
    }
    
    cout << "\base da pilha: " << base->valor << endl;
}

void exibirPilha(){
    if(topo == NULL){
        cout << "\nErro. pilha vazia!" << endl;
        return;
    }
    
    cout << "Pilha: \n";
    NO *atual = topo;
    while(atual != NULL){
        cout << atual->valor << endl;
        atual = atual->proximo;
    }
}

void esvaziarPilha(){
    if(topo == NULL){
        cout << "\nErro. pilha vazia!" << endl;
        return;
    }
    
    while(!isEmpty()){
        pop();
    }
    cout << "\nPilha esvaziada!" << endl;
}

int main() {
    push();
    push();
    push();
    
    exibirTopo();
    exibirBase();
    
    cout << "\n";
    exibirPilha();
    
    cout << "\n";
    pop();
    
    cout << "\n";
    exibirPilha();

    //CRIAR MENU

    return 0;
}