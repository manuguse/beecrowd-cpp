def verifica_paridade(num):
    if num%2 == 0:
        return 1
    return 0

def verifica_positividade(num):
    if num > 0:
        return 1
    return 0

positivos = 0 
negativos = 5
pares = 0
impares = 5

for i in range(5):
    num = int(input())
    positivos += verifica_positividade(num)
    pares += verifica_paridade(num)
    if num == 0:
        negativos -= 1

negativos -= positivos
impares -= pares

print(pares, "valor(es) par(es)")
print(impares, "valor(es) impar(es)")
print(positivos, "valor(es) positivo(s)")
print(negativos, "valor(es) negativo(s)")