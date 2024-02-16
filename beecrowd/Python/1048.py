salario = float(input())


if salario <= 400.00:
	reajuste = salario * 0.15
	novoSalario = salario + reajuste
	percentual = 15
	
elif salario > 400.00 and salario <= 800.00:
	reajuste = salario * 0.12
	novoSalario = salario + reajuste
	percentual = 12

elif salario > 800.00 and salario <=1200.00:
	reajuste = salario * 0.1
	novoSalario = salario + reajuste
	percentual = 10
	 
elif salario > 1200.00 and salario <= 2000.00:
	reajuste = salario * 0.07
	novoSalario = salario + reajuste
	percentual = 7

elif salario > 2000.00:
	reajuste = salario * 0.04
	novoSalario = salario + reajuste
	percentual = 4

print("Novo salario: {:.2f}".format(novoSalario))
print("Reajuste ganho: {:.2f}".format(reajuste))
print("Em percentual: {} %".format(percentual))