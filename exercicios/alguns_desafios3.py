'''
Crie um programa que peça um número inteiro ao usuário.
O programa deve calcular e imprimir a tabuada de multiplicação desse número, do 1 ao 10.
'''
num_b = int(input('Insiraum número inteiro e te mostrarei a Tabuada dele de 1 a 10: '))
for multiplicador in range(1,11):
    resultado = num_b * multiplicador
    print(resultado)