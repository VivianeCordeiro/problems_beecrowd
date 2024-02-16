#include <iostream>

using namespace std;

int sobrevivente(int n, int k){
    	if(n == 1)  return 0;
    	return (sobrevivente(n - 1, k) + k) % n;
}
/*

int main(){
	int nc, n, k, ultimo, caso=0;
	cin >> nc;
	
	while(nc!=0){
		int visit=1, pulo=0;
		cin >> n >> k;
		int vet[n];
		for(int i=0; i<n; i++){
			vet[i]=i+1;
		}
		vet[k-1]=0;
		for(int cont=k-1; cont<n+1; cont++){
			if(visit==n){break;}
			if(vet[cont]!=0){
				pulo++;
				if(pulo==k){
					ultimo=vet[cont];
					vet[cont]=0;
					pulo=0;
					visit++;
					if(cont==n-1){cont=-1;}
				}
				if(cont==n-1){cont=-1;}
			}
			if(cont==n-1){cont=-1;}	
		}
		caso++;
		cout << "Case "<< caso <<": "<<ultimo << endl;
		nc--;
	}
	return 0;
}*/

int main(){
    int NC, n, k;

    cin >> NC;

    for(int i = 1; i <= NC; ++i){
        cin >> n >> k;

        cout << "Case " << i << ": " << sobrevivente(n, k) + 1 << endl;
    }

    return 0;
}
	
