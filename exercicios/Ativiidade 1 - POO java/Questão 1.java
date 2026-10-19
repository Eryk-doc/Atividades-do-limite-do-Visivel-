// Eryk de Oliveira Candiido

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite a idade: ");
        int idade = scanner.nextInt();

        System.out.print("Possui ingresso com selo?: ");
        String resposta = scanner.next();
        boolean ingressoValido = resposta.equalsIgnoreCase("Sim");

        if (idade >= 18 && ingressoValido) {
            System.out.println("Entrada permitida");
        } else {
            System.out.println("Entrada negada");
    }

        scanner.close();
    }
}
