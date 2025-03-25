#include <iostream>

using namespace std;

int main(){
	int vetor[5];
	int soma = 0;
	
	cout << "Preencha o vetor!\n";
	for(int i = 0; i < 5; i++){
		cout << "\nNumero " << i+1 << ":" << endl;
		cin >> vetor[i];
	}

	for(int i = 0; i < 5; i++){
		soma += vetor[i];
	}

	cout << "\nO somatorio dos elementos do vetor eh: " << soma << endl;
	
	return 0;
}