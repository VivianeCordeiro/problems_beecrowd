#include <iostream>

using namespace std;

int main(){
	int i=1;
	int j=7;
	int m=7;

	for(int k=0; k<5; k++){
		for(int l=0; l<3; l++){
			cout << "I=" << i << " J=" << j << endl;
			j-=1;
		}
		i+=2;
		m+=2;
		j=m;
	}
	return 0;
}