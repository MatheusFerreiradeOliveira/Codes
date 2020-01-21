a = list(map(int, input().split(' ')))

arr = list(map(int, input().split(' ')))

pares = [[0 for x in range(3)] for y in range(a[0])]

#vou salvar o atual tbm, ai quando atualizar vejo quem tá com aquele atual e faço min e max com os valores dele, alem de atualizar o atual
for i in range(a[0]):
    pares[i][0] += (i+1) #atual
    pares[i][1] += (i+1) #max
    pares[i][2] += (i+1) #min

for i in arr:
    if(pares[i-1][0] != 1):
        pares[i-1][0] -= 1
        
        proximo = 0

        for j in range(a[0]):
            if(pares[j][0] == pares[i-1][0] and j != i-1):
                proximo = j
                break

        pares[proximo][0] += 1

        pares[i-1][1] = min(pares[i-1][1], pares[i-1][0])
        pares[i-1][2] = max(pares[i-1][2], pares[i-1][0])

        pares[proximo][1] = min(pares[proximo][1], pares[proximo][0])
        pares[proximo][2] = max(pares[proximo][2], pares[proximo][0])

for i in range(a[0]):
    print(pares[i][1], pares[i][2])
