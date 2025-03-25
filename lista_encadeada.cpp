#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

// typedef struct Telemento {
//     int valor;
//     struct Telemento *proximo;
// } ELEMENTO;

// ELEMENTO *listaSimples = NULL;      //VARIAVEL GLOBAL QUE VAI SER O PRIMEIRO NÓ

// void criarLista() {
//     if (listaSimples != NULL) {
//         cout << "Ja existe uma lista criada\n";
//     } else {
//         listaSimples = (ELEMENTO *) malloc(sizeof(ELEMENTO));
//         if (listaSimples == NULL) {
//             cout << "Memoria Insuficiente\n";
//         } else {
//             cout << "Informe um valor:\n";
//             cin >> listaSimples->valor;
//             // apontar o seu proximo para NULO
//             listaSimples->proximo = NULL;
//         }
//     }
// }

// void adicionarElementoInicio() {
//     if (listaSimples == NULL) {
//         criarLista();
//     } else {
//         ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));
//         if (ptrtemp == NULL) {
//             cout << "Memoria Insuficiente\n";
//         } else {
//             cout << "Informe um valor:\n";
//             cin >> ptrtemp->valor;
//             // apontar o seu proximo para NULO
//             ptrtemp->proximo = NULL;
            
//             // Faça o proximo do ptrtemp apontar para o
//             // primeiro elemento da lista, que é o
//             // proprio ponteiro listaSimples
//             ptrtemp->proximo = listaSimples;
//             listaSimples = ptrtemp;
//         }
//     }
// }

// void adicionarElementoFim() {
//     if (listaSimples == NULL) {
//         criarLista();
//     } else {
//         ELEMENTO *ptrtemp = (ELEMENTO *) malloc(sizeof(ELEMENTO));
//         if (ptrtemp == NULL) {
//             cout << "Memoria Insuficiente\n";
//         } else {
//             cout << "Informe um valor:\n";
//             cin >> ptrtemp->valor;
//             // apontar o seu proximo para NULO
//             ptrtemp->proximo = NULL;
            
//             ELEMENTO *temp = listaSimples;
//             while (temp->proximo != NULL) {
//                 temp = temp->proximo;
//             }
//             // nesse ponto do codigo eu cheguei ao ultimo
//             // ATUALIZAR TUDO
//             temp->proximo = ptrtemp;
//         }
//     }
// }

// void exibirLista(){
//     if(listaSimples == NULL){
//         cout << "Lista vazia!\n";
//     }else{
//         ELEMENTO *temp = listaSimples;
//         while(temp != NULL){
//             cout << "Valor do elemento: " << temp->valor << endl;
//             temp = temp->proximo;
//         }
//     }
// }

// void exibirListaInversa(ELEMENTO *elemento) {
//     if (elemento == NULL) {
//         return;  // Caso a lista seja vazia ou tenha chegado ao fim
//     }

//     // Recursão: vai até o final da lista
//     exibirListaInversa(elemento->proximo);

//     // Quando voltar das chamadas recursivas, imprime o valor do elemento
//     cout << elemento->valor << " ";
// }

// int main() {
//     adicionarElementoInicio();
//     adicionarElementoFim();
//     adicionarElementoFim();
//     adicionarElementoFim();

//     cout << "\n";

//     exibirLista();

//     cout << "\n";

//     exibirListaInversa(listaSimples);

//     return 0;
// }


typedef struct no{
    int valor;
    struct no *proximo;
}No;

No *inicio = NULL;

void criarLista(){
    if(inicio != NULL){
        cout << "A lista ja está criada!" << endl;
    }else{
        inicio = (No*) malloc(sizeof(No));
        if(inicio == NULL){
            cout << "Memoria insuficiente!\n";
        }else {
            cout << "Informe o valor do primeiro nó: " << endl;
            cin >> inicio->valor;
            inicio->proximo = NULL;
        }
    }
}

void adicionarInicio(){
    if(inicio == NULL){
        criarLista();
    }else {
        No *novo = (No*) malloc(sizeof(No));
        if(novo == NULL){
            cout << "Memória insuficiente" << endl;
        }else {
            cout << "Informe o valor do nó: " << endl;
            cin >> novo->valor;
            
            //LOGICA DO APONTAMENTO PARA ADICIONAR NO INICIO
            novo->proximo = inicio;
            inicio = novo;
        }
    }
}

void adicionarFinal(){
    if(inicio == NULL){
        criarLista();
    }else {
        No *novo = (No*) malloc(sizeof(No));
        if(novo == NULL){
            cout << "Memória insuficiente" << endl;
        }else {
            cout << "Informe o valor do nó: " << endl;
            cin >> novo->valor;
            novo->proximo = NULL;
            
            //LÓGICA DE APONTAMENTO PARA ADICIONAR NO FINAL
            No *temp = inicio;
            while(temp->proximo != NULL){
                temp = temp->proximo;
            }
            temp->proximo = novo;
        }
    }
}

void exibirLista(){
    if(inicio == NULL){
        cout << "\nA lista está vazia. Nada para exibir\n";
    }else {
        No *temp = inicio;
        while(temp != NULL){
            cout << temp->valor << " -> ";
            temp = temp->proximo;
        }
        cout << "NULL\n";
    }
}

void adicionarAletorio(){
    if(inicio == NULL){
        criarLista();
    }else{
        exibirLista();
        
        int x;
        cout << "\nInforme após qual elemento da lista deseja inserir o novo elemento: ";
        cin >> x;
        
        No *novo = (No*) malloc(sizeof(No));
        if(novo == NULL){
            cout << "Memória insuficiente" << endl;
        }else{
            cout << "Informe o valor do novo nó: " << endl;
            cin >> novo->valor;
        }
        
        No *temp = inicio;
        while(temp != NULL && temp->valor != x){
            temp = temp->proximo;
        }
        
        if(temp == NULL){
            cout << "O elemento informado nao existe na lista" << endl;
        }else{
            novo->proximo = temp->proximo;
            temp->proximo = novo;
        }
    }
}

void exibirListaInversa(No *elemento){
    if(elemento == NULL){   //PARA CASO CHEGUE NO ULTIMO OU LISTA VAZIA
        return;
    }
    
    exibirListaInversa(elemento->proximo);
    cout << elemento->valor << " <- ";
}

void removerNo(){
    if(inicio == NULL){
        cout << "A lista está vazia!\n"; 
        return;
    }
    
    No *anterior = NULL;
    No *atual = inicio;
    
    int x;
    cout << "\nInforme o valor a ser removido: ";
    cin >> x;
        
    while(atual != NULL && atual->valor != x){
        anterior = atual;
        atual = atual->proximo;
    }
        
    //VERIFICANDO SE O VALOR NÃO ESTÁ NA LISTA
    if(atual == NULL){
        cout << x << " ñ foi encontrado!" << endl;
        return;
    }
    //VERIFICANDO SE É O PRIMEIRO
    if(anterior == NULL){
        inicio = atual->proximo;
    }else {
        anterior->proximo = atual->proximo;
    }
    //LIBERA MEMORIA DO NO REMOVIDO
    free(atual);
    cout << "\nValor " << x << " removido" << endl;
}

int main(){
    
    int aux = 1;
    while(aux == 1){
        cout << "\n";
        cout << "------ MENU ------" << endl;
        cout << "\n";
        
        cout << "(1) Criar lista;" << endl;
        cout << "(2) Inserir um novo elemento no inicio;" << endl;
        cout << "(3) Inserir um novo elemento no final;" << endl;
        cout << "(4) Inserir um novo elemento em posição aleatoria;" << endl;
        cout << "(5) Remover um elemento;" << endl;
        cout << "(6) Exibir Lista;" << endl;
        cout << "(7) Exibir Lista em ordem inversa;" << endl;
        cout << "(0) Sair;" << endl;
        
        int opcao;
        cout << "\nInforme a opção desejada: ";
        cin >> opcao;
        
        if(opcao == 1){
            criarLista();
        } else if (opcao == 2){
            adicionarInicio();
        } else if (opcao == 3){
            adicionarFinal();
        } else if (opcao == 4){
            adicionarAletorio();
        } else if (opcao == 5){
            removerNo();
        } else if (opcao == 6){
            exibirLista();
        } else if (opcao == 7){
            exibirListaInversa(inicio);
        } else if (opcao == 0){
            aux = 0;
        } 
        else{
            cout << "\nopção inválida!" << endl;
        }
    }
    
    return 0;
}