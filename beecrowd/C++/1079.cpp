#include <iostream>

using namespace std;

int main (){
	int N;
	
	cin >> N;
	for(int i=0; i<N; i++){
		float soma=0.0, valor, media=0.0;
		for(int k=0; k<3; k++){
			cin >> valor;
			if(k==0){soma = soma + (valor*2);}
			if(k==1){soma = soma + (valor*3);}
			if(k==2){soma = soma + (valor*5);} 
		}
		media = soma/10;
		printf("%.1f", media);
		cout << endl;
	}
	return 0;
}