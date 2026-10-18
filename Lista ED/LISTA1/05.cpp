#include <iostream>
using namespace std;

int main() {
	double joao = 1000.0;
	double maria = 100.0;
	int meses = 0;

	while (maria <= joao) {
		joao *= 1.005;
		maria *= 1.01;
		++meses;
	}

	std::cout << "Demorou " << meses << " meses.\n";
	return 0;
}
