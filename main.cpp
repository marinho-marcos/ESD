#include <iostream>
#include <string>  
#include <iomanip>   //CONTROLE DE FLUXO
#include <cmath>
//#include <format>    //FORMATACAO DE STRINGS 
using namespace std;


// int main() {
//     string saudacao = "Ola, ";
//     string nome;
//     int idade;

//     cout << "Informe o seu nome: " << endl;
//     getline(cin, nome);
//     cout << "Agora informe sua idade: " << endl;
//     cin >> idade;
//     cout << saudacao << nome << ", Voce possui " << idade << " anos" << endl;
//     return 0;
// }


//EXEMPLO DE FORMATACAO UTILIZANDO A FUNCAO 'FORMAT' SUPORTADO APENAS A PARTIR DO C++ 20
// int main() {
//     std::string nome = "Jose";
//     int idade = 20;

//     std::string resultado = std::format("Olá, {nome}! a sua idade é: {idade}!", nome, idade);
//     cout << resultado << endl;
//     return 0;
// }

//FORMATAÇÃO DE VALOR UTILIZANDO MANIPULACAO DE FLUXO
//FIXED -> DEFINE QUE O NUMERO DEVE SER EXIBIDO EM NOTACAO DECIMAL FIXA
//SETPRECISION() -> DEFINE A PRECISAO DE CASAS DECIMAIS
// int main(){
//     float num = 10.23456;
//     cout << "Número formatado: " << fixed << setprecision(2) << num << endl;
// }

// int main(){
//     float preco = 1.99;
//     float peso = 2.5;
//     int pera = 3;
//     char qualidade = 'A';

//     cout << "Existem " << pera << " peras de qualidade " << qualidade << " pesando " << peso << " quilos." << endl;

//     cout << "O preco por quilo eh R$" << preco << ", e o total vai ser de R$" << peso*preco << endl;

//     return 0;
// }

// int main(){
//     int dia, mes, ano;

//     cout << "Informe sua data de nascimento (dd mm aa): " << endl;
//     cin >> dia >> mes >> ano;

//     cout << "voce nasceu em " << dia << "/" << mes << "/" << ano << endl;
// }

//PROGRAMA PARA CALCULAR PERIMETRO E A AREA DE UMA CIRCUNFERENCIA DE RAIO INFORMADO PELO USUARIO
