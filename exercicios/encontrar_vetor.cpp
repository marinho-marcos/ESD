#include <iostream>  // para cin e cout

using namespace std;

// int main(){

// 	int vetor[10];
// 	int numero;
// 	int encontrado = 0;
	
// 	cout << "informe 10 numeros inteiros para preencher o vetor!\n";
// 	for (int i = 0; i < 10; i++){
// 		cout << "\nInforme o numero da posicao " << i+1 << endl;
// 		cin >> vetor[i];
// 	}

// 	cout << "\nInforme o numero que deseja buscar no vetor: \n";
// 	cin >> numero;

// 	for (int i = 0; i < 10; i++){
// 		if (vetor[i] == numero){
// 			cout << "o numero " << numero << "esta contido no vetor na posicao " << i+1 << endl;
// 			encontrado = 1;
// 			break;
// 		} 
// 	}

// 	if (encontrado == 0){
// 		cout << "\nO numero informado nao existe no vetor!" << endl;
// 	}

// 	return 0;
// }


//EXEMPLO ANTERIOR PORÉM COM USO DE FUNCAO EXTERNA

void procuraVetor(int vetor[], int tamanho, int num){
	int encontrado = 0;

	for (int i = 0; i < tamanho; i++){
		if(vetor[i] == num){
			encontrado = 1;
			break;
		}
	}

	if(encontrado == 1){
		cout << "\nO numero informado esta contido no vetor!";
	} else{
		cout << "\nO numero informado nao esta contido no vetor";
	}
}

int main(){
	int tamanhoVetor, numero;

	cout << "Informe o qual vai ser o tamanho do vetor: \n";
	cin >> tamanhoVetor;
	
    int vetor[tamanhoVetor];

	for(int i = 0; i < tamanhoVetor; i++){
		cout << "\nInforme o numero da posicao " << i+1 << endl;
		cin >> vetor[i];
	}

	cout << "\nAgora informe o numero a ser buscado no vetor: \n";
	cin >> numero;

	procuraVetor(vetor, tamanhoVetor, numero);

	return 0;
}