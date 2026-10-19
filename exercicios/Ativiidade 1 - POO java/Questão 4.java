// Eryk de Oliveira Candiido

import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Digite o primeiro número: ");
		double numero1 = scanner.nextDouble();

		System.out.print("Digite o segundo número: ");
		double numero2 = scanner.nextDouble();

		System.out.print("Escolha a operação (+, -, *, /): ");
		char operacao = scanner.next().charAt(0);

		switch (operacao) {
			case '+':
				System.out.println("Resultado: " + (numero1 + numero2));
				break;
			case '-':
				System.out.println("Resultado: " + (numero1 - numero2));
				break;
			case '*':
				System.out.println("Resultado: " + (numero1 * numero2));
				break;
			case '/':
				if (numero2 == 0) {
					System.out.println("Erro: divisão por zero não pode ser realizada.");
				} else {
					System.out.println("Resultado: " + (numero1 / numero2));
				}
				break;
			default:
				System.out.println("Erro: operação inválida.");
				break;
		}

		scanner.close();
	}
}
