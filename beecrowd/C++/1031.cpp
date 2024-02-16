#include <iostream>

using namespace std;

int sobrevivente(int n, int k){
    	int ultimo=0;
	for(int i=1; i<n; ++i)
		ultimo = (ultimo+k)%i;
		
    	return ultimo;
}

int main(){
    	int N, K;
	while(1){
    		cin >> N;
		if(!N)
			break;
		K=1;
		while(sobrevivente(N, K)+2 != 13)
			++K;
		cout << K << endl;
			
	}

    return 0;
}