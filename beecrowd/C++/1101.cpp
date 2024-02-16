#include <iostream>

using namespace std;

int main(){
	int N, M, maior, menor, soma;
	cin >> N >> M;
	while(N>0 & M>0){
		if(N>M){maior=N; menor=M;}
		else{maior=M; menor=N;}
		for(int k=menor; k<=maior; k++){
			soma += k;
			cout << k << " ";
		}
		cout << "Sum=" << soma << endl;
		soma=0;
		cin >> N >> M;
	}
	return 0;
}