#include <iostream>
using namespace std;

int main() {
    int quantidade, numero, soma = 0;

    cout << "Informe quantos numeros voce deseja informar: ";
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite o numero " << i << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            soma += numero;
        }
    }

    cout << "A soma dos numeros pares informados e: " << soma << endl;

    return 0;
}
