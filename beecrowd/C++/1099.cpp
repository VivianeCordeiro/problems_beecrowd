#include <iostream>

using namespace std;

int main(){
	int N, X, Y, soma, maior, menor;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> X >> Y;
		if(X>Y){
			maior = X;
			menor = Y;
		}
		else{
			maior = Y;
			menor = X;
		}
		for(int k=menor+1; k<maior; k++){
			if(k%2 != 0){
				soma += k;
			}
		}
		cout << soma << endl;
		soma = 0;
		
	}
	return 0;
}