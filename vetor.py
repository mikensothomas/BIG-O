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
A complexidade é linear, O(N), onde N é o 
tamanho dos vetores (que é constante neste caso, 7).


Pode-se otimizar o código utilizando funções nativas do Python, 
como zip para percorrer simultaneamente os elementos de ambos os vetores.

vetor1 = [10, 24, 3, 43, 55, 6, 7]
vetor2 = [72, 6, 5, 4, 32, 2, 10]
soma_vetor = [x + y for x, y in zip(vetor1, vetor2)]
print("A soma dos vetores é:", soma_vetor)

O algoritmo de soma de vetores é um algoritmo de complexidade linear (O(N)), 
que é eficiente e escalável para entradas de tamanho razoável. 
Algoritmos lineares são classificados como P (Polinomial), pois seu 
tempo de execução é proporcional ao tamanho da entrada.



"""