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
        criarPilha();
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

    if(topo == NULL){
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
    
    cout << "base da pilha: " << base->valor << endl;
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

/*
void esvaziarPilha(){
    if(topo == NULL){
        cout << "\nErro. pilha vazia!" << endl;
        return;
    }
    
    while(topo != NULL){
        pop();
    }
    cout << "\nPilha esvaziada!" << endl;
}
*/

int main() {
    int opcao = -1; // Inicia com um valor inválido para garantir a primeira execução do menu

    while (opcao != 0) {
        cout << "\n------ MENU ------\n";
        cout << "(1) Criar pilha\n";
        cout << "(2) Push\n";
        cout << "(3) Pop\n";
        cout << "(4) Exibir topo\n";
        cout << "(5) Exibir base\n";
        cout << "(6) Exibir pilha completa\n";
        cout << "(0) Sair\n";
        cout << "\nInforme a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1: 
                criarPilha();
                break;
            case 2: 
                push();
                break;
            case 3: 
                pop();
                break;
            case 4: 
                exibirTopo();
                break;
            case 5: 
                exibirBase();
                break;
            case 6: 
                exibirPilha();
                break;
            case 0: 
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    }

    return 0;
}
