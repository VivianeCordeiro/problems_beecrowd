import sys
HI, MI, HF, MF = map(int, sys.stdin.readline().split())

if HI==HF:
	if MI==MF:
		horas = 24
		minutos = 0
		
	elif MI > MF:
		horas = 23
		minutos = 60-MI+MF
		
	else:
		horas = 0
		minutos = MF-MI		
		

elif HI < HF:
	if MI < MF:
		horas = HF-HI
		minutos = MF-MI
	if MI > MF:
		horas = HF-HI-1
		minutos = (60-MI)+MF
	if MI == MF:
		horas = HF-HI
		minutos = 0
			
elif HI > HF:
	if MI < MF:
		horas = (24-HI)+HF
		minutos = -MI+MF
		
	elif MI > MF:
		horas = (24-HI)+HF-1 
		minutos = (60-MI)+MF
		
	elif MI==MF:
		horas = (24-HI)+HF 
		minutos = 0

print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(horas, minutos))