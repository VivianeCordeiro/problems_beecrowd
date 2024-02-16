#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	float N1, N2, N3, N4, media, exame;
//leitura das notas
	cin >> N1 >> N2 >> N3 >> N4;
	media = ((N1*2)+(N2*3)+(N3*4)+N4)/10;
	printf("Media: %.1f\n", media);

//se média maior que 7, aluno aprovado
	
	if(media >= 7 ){
		printf("Aluno aprovado.\n");
	}

//se media menor que 5, aluno reprovado
	if (media<5){
		printf("Aluno reprovado.\n");
	}

//se a media entre 5 e 6.9, aluno de exame
	else {
		if(media<=6.9 & media>=5){
			printf("Aluno em exame.\n");
		
			cin >> exame;
			printf("Nota do exame: %.1f\n", exame);
			media = (media + exame)/2;
			if(media < 5) {
				printf("Aluno reprovado.\n");
				printf("Media final: %.1f\n", media);
			}
			else {
				printf("Aluno aprovado.\n");
				printf("Media final: %.1f\n",media);
			}
		}
	}


	return 0;
}