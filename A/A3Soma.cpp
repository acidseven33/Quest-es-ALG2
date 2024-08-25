#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void somaIntervalo(int num1, int num2) {
    int soma = 0;
    for (int i = num1; i <= num2; i++) {
        soma += i;
    }
    cout << "A soma dos números entre " << num1 << " e " << num2 << " é: " << soma << endl;
}

int main() {
    int num1, num2;
    cout << "Digite dois números inteiros positivos: ";
    cin >> num1 >> num2;
    somaIntervalo(num1, num2);
    return 0;
}
