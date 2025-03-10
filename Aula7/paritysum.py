import sys

def mesma_paridade(numeros):
    return all(num % 2 == numeros[0] % 2 for num in numeros)

def encontrar_maior_impar_par(numeros):
    maior_impar = max((num for num in numeros if num % 2 == 1), default=-1)
    maior_par = max((num for num in numeros if num % 2 == 0), default=-1)
    return maior_impar, maior_par

def calcular_operacoes(numeros):
    if mesma_paridade(numeros):
        return 0
    
    maior_impar, maior_par = encontrar_maior_impar_par(numeros)
    if maior_impar == -1 or maior_par == -1:
        return -1
    
    operacoes = 0
    numeros.sort()
    
    for i in range(len(numeros)):
        if numeros[i] % 2 == 0 and numeros[i] < maior_impar:
            numeros[i] += maior_impar
            maior_impar = max(maior_impar, numeros[i])
            operacoes += 1
    
    if mesma_paridade(numeros):
        return operacoes
    
    for i in range(len(numeros)):
        if numeros[i] == maior_impar:
            numeros[i] += maior_par
            break
    
    contar_par = sum(1 for num in numeros if num % 2 == 0)
    
    return operacoes + 1 + contar_par

def main():
    casos_de_teste = int(sys.stdin.readline().strip())
    
    for _ in range(casos_de_teste):
        tamanho = int(sys.stdin.readline().strip())
        numeros = list(map(int, sys.stdin.readline().strip().split()))
        print(calcular_operacoes(numeros))

if __name__ == "__main__":
    main()