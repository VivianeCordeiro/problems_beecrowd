#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	for(int k=1; k<=(N*4); k++){
		if(k%4 == 0){cout << "PUM" << endl;}
		else{cout << k << " ";}		
	}
	return 0;
}