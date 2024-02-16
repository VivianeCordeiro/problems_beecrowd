salario = float(input())


if salario <= 2000.00:
	print('Isento')
elif 2000.01 <= salario <= 3000.00:
	imposto = (salario - 2000)*0.08
	print ('R$ {:.2f}'.format(imposto))
elif 3000.01 <= salario <= 4500.00:
	imposto = 0.18*(salario-3000.00) + 80
	print ('R$ {:.2f}'.format(imposto))
elif salario > 4500.00:
	imposto = 0.28*(salario-4500.00)+ 80 + 270
	print('R$ {:.2f}'.format(imposto))