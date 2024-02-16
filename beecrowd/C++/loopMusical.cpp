#include <iostream>

using namespace std;

int main(){
	int n, comparacao=0, i;
	cin >> n;
	
	while(n > 0){
		int vet[n];
		int picos=0;
		for(int entrada=0; entrada<n; entrada++){
			cin >> vet[entrada];
		}
		for(i=0; i<n; i++){
			if(vet[i]<vet[(i+1)%n]){
				if(vet[(i+1)%n]>vet[(i+2)%n]){
					picos++;	
				}
			}
			if(vet[i]>vet[(i+1)%n]){
				if(vet[(i+1)%n]<vet[(i+2)%n]){
					picos++;
					comparacao=-1;
				}
			}
		}
		cout << picos << endl;
		cin >> n;
	}	
	return 0;
}