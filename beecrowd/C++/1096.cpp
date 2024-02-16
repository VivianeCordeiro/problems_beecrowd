#include <iostream>

using namespace std;

int main(){
	int i=1;

	for(int k=0; k<5; k++){
		int j=7;
		for(int l=0; l<3; l++){
			cout << "I=" << i << " J=" << j << endl;
			j-=1;
		}
		i+=2;
	}
	return 0;
}