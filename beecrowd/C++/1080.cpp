#include <iostream>

using namespace std;

int main(){
	int vetor[100];
	int maior=-1, indice;

	for(int i=0; i<100; i++){
		scanf("%d", &vetor[i]);	
	}
	for(int i=0; i<100; i++){
		if(vetor[i]>maior){
			maior=vetor[i];
			indice=i;	
		}
	}
	cout << maior << endl;
	cout << indice+1 << endl;
	return 0;
}