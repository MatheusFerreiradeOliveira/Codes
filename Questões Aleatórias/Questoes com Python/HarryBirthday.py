n = int(input())

for i in range(n):
    menor = 1000000000

    a = list(map(int, input().split(' ')))

    for j in range(10):
        if(menor > a[j]):
            saida = j
            menor = a[j]

    if(saida == 0):
        for j in range(1, 10):
            if(menor == a[j]):
                saida = j
                break
        if(saida == 0):
            print(10**(a[saida]+1))
        else:
            print(str(saida) * (a[saida] + 1))
    else:
        print(str(saida) * (a[saida] + 1))
    



