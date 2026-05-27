'''
Defina uma senha secreta no seu código (exemplo: senha_correta = "python123").
Crie um programa que peça para o usuário digitar a senha.
'''
senha_correta = 'python123'
senha_inserida = input('Insisra sua senha:')
while senha_correta != senha_inserida:
    print(f'Senha incorreta.')
    senha_inserida = input('Insira uma senha novamente: ')
print(f'Senha correta.')    