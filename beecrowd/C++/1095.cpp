#include <iostream>

using namespace std;

int main(){
	int i=1, j=60;
	for(int k=0; k<13; k++){
		cout << "I=" << i << " J=" << j << endl;
		i+=3;
		j-=5;
	}

	return 0;
}