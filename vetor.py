"""
Este código é um código 
feito em python, ele faz 
a soma de dois vetores e imprime o vetor resultante.
"""
vetor1 = [10, 24, 3, 43, 55, 6, 7]
vetor2 = [72, 6, 5, 4, 32, 2, 10]

soma_vetor = []

for i in range(7):
    soma_elemento = vetor1[i] + vetor2[i]
    soma_vetor.append(soma_elemento)

print("Vetor resultante da soma:", soma_vetor)