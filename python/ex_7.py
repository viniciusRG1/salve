numero = 0
tempo = 0
media_positivo = 0
for tempo in range(1, 11):
      numero = int(input('escreva o número postivo para a média \n'))
      if numero >= 0:
            media_positivo += numero
      else:
            tempo -= 1
      
media_positivo = media_positivo / 10
print(f'a média é {media_positivo}')
