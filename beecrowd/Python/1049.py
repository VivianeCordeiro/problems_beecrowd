palavra01 = input()
palavra02 = input()
palavra03 = input()

if palavra01 == 'vertebrado':
	if palavra02 == 'ave':
		if palavra03 == 'carnivoro':
			print('aguia')
		elif palavra03 == 'onivoro':
			print('pomba')
	elif palavra02 == 'mamifero':
		if palavra03 == 'onivoro':
			print('homem')
		elif palavra03 == 'herbivoro':
			print('vaca')

if palavra01 == 'invertebrado':
	if palavra02 == 'inseto':
		if palavra03 == 'hematofago':
			print('pulga')
		elif palavra03 == 'herbivoro':
			print('lagarta')
	if palavra02 == 'anelideo':
		if palavra03 == 'hematofago':
			print('sanguessuga')
		elif palavra03 == 'onivoro':
			print('minhoca')
