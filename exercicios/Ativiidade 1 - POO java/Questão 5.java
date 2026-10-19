// Eryk de Oliveira Candido 

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Informe o valor total da compra: R$ ");
        double valorCompra = scanner.nextDouble();

        double frete = valorCompra >= 200.00 ? 0.00 : 15.00;
        double totalPagar = valorCompra + frete;

        System.out.printf("Valor do frete: R$ %.2f%n", frete);
        System.out.printf("Total a pagar: R$ %.2f%n", totalPagar);

        scanner.close();
    }
}
