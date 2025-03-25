#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // int opcao = 2;

    // switch (opcao){
    //     case 1:
    //         cout << "opcao 1 escolhida \n";
    //         break;
    //     case 2:
    //         cout << "opcao 2 escolhida \n";
    //         break;
    //     case 3:
    //         cout << "opcao 3 escolhida \n";
    //         break;
    //     default:
    //         cout << "Opcao invalida! \n";
    // }

    // int opcao;
    // printf("Digite a opcao desejada: \n");
    // scanf("%d", &opcao);

    // switch (opcao){
    //     case 1:
    //         cout << "opcao 1 escolhida \n";
    //         break;
    //     case 2:
    //         cout << "opcao 2 escolhida \n";
    //         break;
    //     case 3:
    //         cout << "opcao 3 escolhida \n";
    //         break;
    //     default:
    //         cout << "Opcao invalida! \n";
    // }

    float a, b;
    char op;

    cout << "informe os dois valores juntamente com a expressao (valor1 op valor2):\n";
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("= %f \n", a+b);
            break;
        case '-':
            printf("= %f \n", a-b);
            break;
        case '*':
            printf("= %f \n", a*b);
            break;
        case '/':
            printf("= %f \n", a/b);
            break;
        default:
            printf("operador invalido!\n");
    }

    return 0;
}