'''
Sistema de Descontos: Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto. 
Exiba o valor do desconto e o preço final a pagar.
'''
# 1. Inserindo valor bruto e desconto em porcentagem.
preco_i = float(input('Preço do produto sem desconto: R$ '))
entrada_usuario = input('Quanto quer dar de desconto? (em %): ')
entrada_limpa = entrada_usuario.replace('%', '')
desconto = float(entrada_limpa)

# 2. Calculando o valor do desconto e o preço final
valor_desconto = preco_i * (desconto / 100)
preco_f = preco_i - valor_desconto

# 3. Mostrando o valor do desconto e o valor com desconto 
print(f'Valor do desconto: R$ {valor_desconto:.2f}')
print(f'Esse é o preço final com desconto: R$ {preco_f:.2f}')