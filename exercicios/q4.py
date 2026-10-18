'''
Elabore um programa que realize a conversão do valor em dólares para
real. (Considere a cotação: 1 dólar americano = 4,96 reais)
'''
# 1.Inserindo os valores em dólar e cotação
valor_d = float(input('Digite o valor em Dólares para saber em Real: '))
cotacao = 4.96

# 2. Calculando o câmbio
valor_r = valor_d * cotacao

# 3. Mostrandoo valor em Relal
print(f'Esse é o valor em Real(cotação de 4.96): {valor_r:.2f}')
