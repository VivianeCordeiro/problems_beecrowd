n = int(input())
inn, outt = 0,0
x = []

for i in range(n):
	x.append(int(input()))
	if 10 <= x[i] <=20:
		inn = inn+1
	if x[i] <10 or x[i]>20:
		outt = outt+1

print('{} in\n{} out'.format(inn, outt))