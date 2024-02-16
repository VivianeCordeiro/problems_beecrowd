#include <iostream>
#include <cmath>

using namespace std;


int sobrevivente(int n, int k){
    	int ultimo=0, max=100, div=0;
    	for(int aux=2 ; aux<=n ; aux++){
		for(int coun=2 ; coun<=sqrt(aux) ; coun++)
        		if(aux%coun==0)
        			div++;
    		if(!div)
			ultimo = (ultimo+aux)%i;
	}	
    	return ultimo;
}

int main(){
    	int N, K, fim;
	while(1){
    		cin >> N;
		if(!N)
			break;
		K=1;
		fim=sobrevivente(N, K)+2;
		cout << fim << endl;
			
	}

    return 0;
}