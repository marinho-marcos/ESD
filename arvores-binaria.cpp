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
        cout << "Árvore ja criada." << endl;
        return;
    }

    raiz = (NO*) malloc(sizeof(NO));
    if(raiz == NULL){
        cout << "erro de alocacao" << endl;
        return;
    }
    
    cout << "Informe o valor da raiz: ";
    cin >> raiz->valor;
    raiz->noESQ = NULL;
    raiz->noDIR = NULL;

    cout << "Árvore criada com sucesso!\n" << endl;
}

void adicionarNo() {
    if (raiz == NULL) {
        cout << "A árvore ainda não foi criada! Use criarArvore() primeiro.\n" << endl;
        return;
    }

    NO *novo = (NO*) malloc(sizeof(NO));
    if (novo == NULL) {
        cout << "Erro de alocação de memória!" << endl;
        return;
    }

    cout << "Informe o valor do novo nó: ";
    cin >> novo->valor;
    novo->noESQ = NULL;
    novo->noDIR = NULL;

    // Percorrer a árvore para encontrar a posição de inserção
    NO *atual = raiz;
    NO *anterior = NULL;

    while (atual != NULL) {
        anterior = atual;
        if (novo->valor < atual->valor) {
            atual = atual->noESQ;
        } else {
            atual = atual->noDIR;
        }
    }

    // Inserir o novo nó na posição correta
    if (novo->valor < anterior->valor) {
        anterior->noESQ = novo;
    } else {
        anterior->noDIR = novo;
    }

    cout << "Nó " << novo->valor << " adicionado com sucesso!\n" << endl;
}

NO* buscar(NO *raiz, int valor) {
    // Caso base: a árvore está vazia (ou subárvore vazia)
    if (raiz == NULL) {
        cout << "\nValor " << valor << " não encontrado!" << endl;
        return NULL;
    }

    // Caso de sucesso: valor encontrado
    if (raiz->valor == valor) {
        cout << "\nValor " << valor << " encontrado!" << endl;
        return raiz;
    }

    // Caso recursivo: busca na subárvore noESQ ou noDIR
    if (valor < raiz->valor) {
        return buscar(raiz->noESQ, valor); // Vai para a subárvore noESQ
    } else {
        return buscar(raiz->noDIR, valor); // Vai para a subárvore noDIR
    }
}


void exibirPreOrdem(NO* raiz) {
    if (raiz != NULL) {
        cout << raiz->valor << " "; // Visita a raiz
        exibirPreOrdem(raiz->noESQ); // Vai para a subárvore noESQ
        exibirPreOrdem(raiz->noDIR); // Vai para a subárvore noDIR
    }
}

void exibirEmOrdem(NO* raiz) {
    if (raiz != NULL) {
        exibirEmOrdem(raiz->noESQ); // Vai para a subárvore noESQ
        cout << raiz->valor << " "; // Visita a raiz
        exibirEmOrdem(raiz->noDIR); // Vai para a subárvore noDIR
    }
}

void exibirPosOrdem(NO* raiz) {
    if (raiz != NULL) {
        exibirPosOrdem(raiz->noESQ); // Vai para a subárvore noESQ
        exibirPosOrdem(raiz->noDIR); // Vai para a subárvore noDIR
        cout << raiz->valor << " "; // Visita a raiz
    }
}

int main(){
    criarArvore();
    adicionarNo();
    adicionarNo();
    adicionarNo();
    adicionarNo();
    
    cout << "\n";
    exibirPreOrdem(raiz);
    
    cout << "\n";
    buscar(raiz, 80);

    //CRIAR MENU

    
    
    return 0;
}