// Eryk de Oliveira Candiido

import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Digite o valor da compra: R$ ");
		double valorCompra = scanner.nextDouble();

		double percentualDesconto;
		if (valorCompra < 100.00) {
			percentualDesconto = 0.0;
		} else if (valorCompra < 500.00) {
			percentualDesconto = 0.05;
		} else {
			percentualDesconto = 0.10;
		}

		double valorDesconto = valorCompra * percentualDesconto;
		double totalPagar = valorCompra - valorDesconto;
	

		System.out.println("Valor do desconto: R$ " + (valorDesconto));
		System.out.println("Total a pagar: R$ " + (totalPagar));
		scanner.close();
	}
}