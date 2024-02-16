entradas = []
par = 0

for i in range(5):
	entradas.append(int(input()))
	if entradas[i]%2==0:
		par = par +1
print(par, 'valores pares')