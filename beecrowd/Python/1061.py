import sys

di = input().split()
hora_i = input().split()

df = input().split()
hora_f = input().split()

DI, DF = int(di[1]), int(df[1])
HI, MI, SI = int(hora_i[0]), int(hora_i[2]), int(hora_i[4])
HF, MF, SF = int(hora_f[0]), int(hora_f[2]), int(hora_f[4])


hora_segundo = 60*60
dia_segundo = hora_segundo*24

inicio = SI + MI*60 + HI*hora_segundo + DI*dia_segundo
final = SF + MF*60 + HF*hora_segundo + DF*dia_segundo

tempo = final-inicio
dias= int(tempo/(dia_segundo))

tempo = tempo%(dia_segundo)
horas = int(tempo/(hora_segundo))

tempo = tempo%(hora_segundo)
minutos = int(tempo/60)

tempo = tempo%60
segundos = tempo
print("{} dia(s)\n{} hora(s)\n{} minuto(s)\n{} segundo(s)".format(dias, horas, minutos, segundos))