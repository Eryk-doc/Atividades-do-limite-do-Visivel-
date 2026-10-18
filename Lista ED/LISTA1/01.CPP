#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;
    
    cout << "Digite a nota da prova: ";
    cin >> nota1;
    cout << "Digite a nota do trabalho: ";
    cin >> nota2;
    
    media = (nota1 * 7 + nota2 * 3) / 10;
    
    cout << "A média do aluno é: " << media << endl;
    
    return 0;
}