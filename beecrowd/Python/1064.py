entradas = 6
valores = []
positivos = 0
soma = 0.0

for i in range(entradas):
	valores.append(float(input()))
	if valores[i] >= 0.0:
		positivos = positivos +1
		soma = soma + valores[i]
print('{} valores positivos\n{:.1f}'.format(positivos, soma/positivos))