entradas = []
positivos, negativos, pares, impares = 0, 0, 0, 0

for i in range(5):
	entradas.append(int(input()))
	if entradas[i] > 0:
		positivos = positivos+1
	if entradas[i] < 0:
		negativos = negativos+1
	if entradas[i]%2 == 0:
		pares = pares+1
	if entradas[i]%2 !=0:
		impares = impares+1

print(pares, 'valor(es) par(es)\n{} valor(es) impar(es)\n{} valor(es) positivo(s)\n{} valor(es) negativo(s)'.format(impares, positivos, negativos))