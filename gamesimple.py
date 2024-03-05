arena = list()
 
def setArena(num:int):
    if num == 0:
        linha = list()
        for j in range(1,4):
            linha.append(j)
    elif num == 1:
        linha = list()
        for l in range(4,7):
            linha.append(l)
    elif num == 2:
        linha = list()
        for n in range(7, 10):
            linha.append(n)
    else:
        pass
 
    return linha

def entradaCerta(checktab: list):
    entraIndice = input()
    while entraIndice == "" or (int(entraIndice) < 1 or int(entraIndice) > 9) or int(entraIndice) in checktab:     
        print("digite uma posicao que esteja livre entre 1 e 9")
        entraIndice = input()
    return entraIndice    
 
 
def preenche(pares:list, jogo:list, num:int):
    if (num % 2) == 0:
        jogo[pares[0]][pares[1]] = "x"
    else:
        jogo[pares[0]][pares[1]] = "*"
 
 
def checkJogo(pontosVer:dict):
    if checarPonto(pontosVer[1], pontosVer[2], pontosVer[3]):
        return True
    elif checarPonto(pontosVer[4], pontosVer[5], pontosVer[6]):
        return True
    elif checarPonto(pontosVer[7], pontosVer[8], pontosVer[9]):
        return True
    elif checarPonto(pontosVer[1], pontosVer[5], pontosVer[9]):
        return True
    elif checarPonto(pontosVer[7], pontosVer[5], pontosVer[3]):
        return True
    elif checarPonto(pontosVer[1], pontosVer[4], pontosVer[7]):
        return True
    elif checarPonto(pontosVer[2], pontosVer[5], pontosVer[8]):
        return True
    elif checarPonto(pontosVer[3], pontosVer[6], pontosVer[9]):
        return True
    else:
        return False
 
 
def checarPonto(a:list, b:list, c:list, tab:list = arena):
    if arena[a[0]][a[1]] == arena[b[0]][b[1]] and arena[b[0]][b[1]] == arena[c[0]][c[1]]:
        return True
    else:
        return False
 
 
 
 
pontoJogo = {
 1 : [0,0],
 2 : [0,1],
 3 : [0,2],
 4 : [1,0],
 5 : [1,1],
 6 : [1,2],
 7 : [2,0],
 8 : [2,1],
 9 : [2,2]
}
 
 
 
for j in range(3):
    arena.append(setArena(j))
 
for l in range(3):
    for n in range(3):
        if n == 2:
            print(arena[l][n])
        else:
            print(arena[l][n],end=" ")
 
cont = 0
chavePosicao = list()

while cont < 9:
    entraIndice = entradaCerta(chavePosicao)
    #for chave, valor in pontoJogo.items():
    if int(entraIndice) in pontoJogo:
        chavePosicao.append(int(entraIndice))
        preenche(pontoJogo[int(entraIndice)], arena, cont)
    else:
        pass

    for l in range(3):
        for n in range(3):
            if n == 2:
                print(arena[l][n])
            else:
                print(arena[l][n],end=" ")
 
    if checkJogo(pontoJogo):
        break

    cont+=1
    
     