numero = 0
tempo = 0
maior = 0
menor = 0
numero = int(input('escreva o numero para saber se ele é o maior ou o menor \n'))
menor = numero
maior = numero

for tempo in range(1, 10):
      numero = int(input('escreva o numero para saber se ele é o maior ou o menor \n'))
      if numero > maior:
            maior = numero
      elif numero < menor:
            menor = numero
      else:
            continue

print(f'o maior numero é {maior} \n')
print(f'o menor numero é {menor} \n')
