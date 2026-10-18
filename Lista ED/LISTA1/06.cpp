#include <iostream>
using namespace std;

int main() {
	double celsius;
	char escala;

	cout << "Digite a temperatura em Celsius: ";
	cin >> celsius;

	cout << "Converter para Fahrenheit (F) ou Kelvin (K)? ";
	cin >> escala;

	switch (escala) {
		case 'F':
		case 'f':
			cout << "Temperatura em Fahrenheit: "
					  << (celsius * 1.8) + 32 << '\n';
			break;
		case 'K':
		case 'k':
			cout << "Temperatura em Kelvin: "
					  << celsius + 273 << '\n';
			break;
		default:
			cout << "Escala invalida. Digite F ou K.\n";
	}

	return 0;
}
