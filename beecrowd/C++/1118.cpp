#include <iostream>

using namespace std;

int main(){
	int repeticao=1;
	do{
		int notas = 0;
		float nota, soma=0, media=0;
		while(notas<2){
			cin >> nota;
			if(nota<=10 && nota>=0){
				soma+=nota;
				notas++;
			}
			else{cout << "nota invalida" << endl;}
	
		}
		media=soma/2;
		printf("media = %.2f\n", media);
		repeticao = 0;
		while(repeticao != 1 && repeticao != 2){
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> repeticao;
		}
	}while(repeticao==1);
	return 0;
}