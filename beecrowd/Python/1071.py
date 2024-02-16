import sys

soma = 0
x = int(input())
y = int(input())

if x<y:
	for i in range(x+1, y, 1):
		if i%2 != 0:
			soma = soma+i
else:
	for i in range(x-1, y, -1):
		if i%2 != 0:
			soma = soma+i

print(soma)
