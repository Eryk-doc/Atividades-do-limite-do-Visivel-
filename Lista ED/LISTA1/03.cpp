#include <iostream>
using namespace std;

int main() {
    const int QUANTIDADE = 20;
    int numero;
    int soma = 0;
    double media;

    cout << "Digite 20 valores inteiros:\n";

    for (int i = 1; i <= QUANTIDADE; i++) {
        cout << "Valor " << i << ": ";
        cin >> numero;
        soma += numero;
    }

    media = static_cast<double>(soma) / QUANTIDADE;

    cout << "A soma dos valores e: " << soma << endl;
    cout << "A media dos valores e: " << media << endl;

    return 0;
}
