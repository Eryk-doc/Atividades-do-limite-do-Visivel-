#include <iostream>
using namespace std;

int main() {
	int quantidade;
	int pares = 0;
    
	int impares = 0;

	cout << "Quantos numeros inteiros positivos deseja inserir? ";
	cin >> quantidade;

	for (int i = 0; i < quantidade; ++i) {
		int numero;
		cout << "Digite um numero inteiro positivo: ";
		cin >> numero;

		while (numero <= 0) {
			cout << "Valor invalido. Digite um numero positivo: ";
			cin >> numero;
		}

		if (numero % 2 == 0) {
			++pares;
		} else {
			++impares;
		}
	}

	cout << "Total de numeros pares: " << pares << '\n';
	cout << "Total de numeros impares: " << impares << '\n';

	return 0;
}
