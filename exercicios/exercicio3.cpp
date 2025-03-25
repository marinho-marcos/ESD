#include <iostream>
#include <string>

using namespace std;

int main(){
	int soma, vetor[5];
	int * ptrVetor = vetor;

	cout << "\nPreencha o vetor com 5 inteiros!" << endl;

	for(int i = 0; i < 5; i++){
		cout << "\nInforme o valor da posicao " << i+1 << endl;
		cin >> ptrVetor[i];
	}

	soma = 0;
	for(int i = 0; i < 5; i++){
		cout << soma << "+" << ptrVetor[i] << " = " << soma + ptrVetor[i] << endl; 
		soma += ptrVetor[i];
	}

	cout << "\nSoma total dos valores inseridos no vetor: " << soma << endl;
	
	return 0;
}