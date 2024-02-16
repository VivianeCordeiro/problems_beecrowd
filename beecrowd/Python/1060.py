quantidadeValores = 6
valores = []
positivos = 0
for i in range(quantidadeValores):
	valores.append(float(input()))
	if valores[i] >= 0.0:
		positivos = positivos+1

print('{}'.format(positivos), 'valores positivos')