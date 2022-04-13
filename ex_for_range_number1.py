nome = 'geek universidade'
lista = [1, 2, 3, 4]
numeros = range(1, 10) #transformar em lista
for letra in nome:
      print(letra) #isso fará com que retorne uma letra e pular uma linha 

for numero in lista:
      print(numero)

for numero in range(1, 10):
      print(numero)

for _, letra in enumerate(nome):
      print(letra)

for letra in nome:
      print(letra, end=' ')

emoji = 'U0001F60D'

for num in range(1, 11):
      print('\U0001F60D' * num)
