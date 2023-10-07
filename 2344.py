nota = int(input())

opcoes = {
    'E': (nota == 0),
    'D': (nota <= 35),
    'C': (nota <= 60),
    'B': (nota <= 85),
    'A': (nota <= 100)
}

for key, value in opcoes.items():
    if value:
        print(key)
        break