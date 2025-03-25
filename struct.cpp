#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::getline;

typedef struct{
    string rua;
    int numero;
    string cidade;
}Endereco;

typedef struct{
    string nome;
    int idade;
    int matricula;
    float nota;
    string curso;
    Endereco end;       //UTILIZANDO OUTRA ESTRUCT COMO MEMBRO DE UMA STRUCT
}Aluno;


int main() {
    //Aluno aluno1 = {"Joao", 28, 112233, 7.5};   //ATRIBUIÇÃO DIRETA EM LINHA ÚNICA

    //ATRIBUICAO PADRAO
    // Aluno aluno1;

    // aluno1.nome = "Marcos";
    // aluno1.idade = 29;
    // aluno1.matricula = 112233;
    // aluno1.nota = 9.5;
    // aluno1.end.rua = "Genival braga";
    // aluno1.end.numero = 158;
    // aluno1.end.cidade = "Guarabira";

    // //IMPRESSÃO PADRÃO
    // cout << aluno1.nome << endl;
    // cout << aluno1.matricula << endl;
    // cout << aluno1.end.rua << endl;

    //UTILIZANDO PONTEIROS EM STRUCTS
    Aluno aluno2;
    Aluno * ptr = &aluno2;

    ptr->nome = "joao marcos";
    ptr->idade = 29;
    ptr->matricula = 445566;
    ptr->nota = 8.3;
    ptr->end.rua = "Heraclito Lucena";
    ptr->end.numero = 157;
    ptr->end.cidade = "GBA";

    //UTILIZANDO PONTEIROS DENTRO DO METODO GETLINE
    cout << "Informe seu curso: " << endl;
    getline(cin, ptr->curso);
    
    cout << " " << endl;

    //IMPRESSÃO POR MEIO DE PONTEIROS
    cout << ptr->nome << endl;
    cout << ptr->idade << endl;
    cout << ptr->matricula << endl;
    cout << ptr->nota << endl;
    cout << ptr->curso << endl;
    cout << ptr->end.rua << endl;
    cout << ptr->end.numero << endl;
    cout << ptr->end.cidade << endl;

    return 0;
}