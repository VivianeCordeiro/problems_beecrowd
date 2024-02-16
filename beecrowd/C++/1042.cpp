#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int entrada[3], ordenacao[3];
	cin >> entrada[0] >> entrada[1] >> entrada[2];

	if(entrada[0]<entrada[1] & entrada[0]<entrada[2] ){
		if(entrada[1]<entrada[2]){
			for(int i = 0; i<3; i++){
				printf("%d\n",entrada[i]);
			}
		}
		else{
			printf("%d\n%d\n%d\n",entrada[0], entrada[2], entrada[1]);
		}
	}
	if(entrada[1]<entrada[0] & entrada[1]<entrada[2]){
		if(entrada[0]<entrada[2]){
			printf("%d\n%d\n%d\n",entrada[1], entrada[0], entrada[2]);
		}
		else{
			printf("%d\n%d\n%d\n",entrada[1], entrada[2], entrada[0]);
		}

	}
	if(entrada[2]<entrada[0] & entrada[2]<entrada[1]){
		if(entrada[0]<entrada[1]){
			printf("%d\n%d\n%d\n",entrada[2], entrada[0], entrada[1]);
		}
		else{
			printf("%d\n%d\n%d\n",entrada[2], entrada[1], entrada[0]);
		}
	}
	cout << endl;
	for(int i = 0; i<3; i++){
		printf("%d\n",entrada[i]);
	}

	return 0 ;
}