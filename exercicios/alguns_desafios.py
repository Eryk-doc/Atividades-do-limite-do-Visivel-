# 1. Capturando e convertendo os dados de entrada
peso = float(input('Digite o seu peso (em kg): '))
altura = float(input('Digite a sua altura (em metros): '))

# 2. Realizando o cálculo
imc = peso / (altura ** 2)

# 3. Verificando a classificação de peso 
if imc >= 30:
    print(f'O seu IMC é: {imc:.2f}. Você está Obeso(a)')

elif imc >= 25.00: 
    print(f'O seu IMC é: {imc:.2f}. Você está com Sobrepeso')

elif imc >= 18.5: 
    print(f'O seu IMC é: {imc:.2f}. Você está no peso ideal')

else: 
    print(f'O seu IMC é: {imc:.2f}. Você está Abaixo do peso')



