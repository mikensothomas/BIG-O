"""
Este código é um código 
feito em python, ele faz 
a soma de dois vetores e imprime o vetor resultante.
"""
vetor1 = [10, 24, 3, 43, 55, 6, 7]
vetor2 = [72, 6, 5, 4, 32, 2, 10]

soma_vetor = []

for i in range(7): #O(N)
    soma_elemento = vetor1[i] + vetor2[i]
    soma_vetor.append(soma_elemento)

print("A soma dos vetores é:", soma_vetor)

"""
Este algoritmo é de ordem linear O(N)

No caso deste algoritmo, como o 
algoritmo tem complexidade linear (O(n)), ele estaria na classe P 
(problemas solucionáveis em tempo polinomial).
"""