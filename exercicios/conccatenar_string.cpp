// PROGRAMA LÊ DUAS STRINGS DO USUARIO E AS CONCATENE E EM SEGUIDA EXIBA A STRING CONCATENADA

#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){
	string str1, str2, concatenada;

	cout << "\nInforme uma frase: " << endl;
	getline(cin, str1);
	cout << "Informe outra frase: " << endl;
	getline(cin, str2);

	concatenada = str1 + str2;
	
	cout << "\nstring concatenada: " << concatenada << endl;

	return 0;
}