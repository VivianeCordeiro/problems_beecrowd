#include <iostream>

using namespace std;

int main(){
	float i=0.0, j=1.0, m=1.0;
	
	for(int k=0; k<11; k++){
		for(int l=0; l<3; l++){
			cout << "I=" << i << " J=" << j << endl;
			j+=1.0;
		}
		i+=0.2;
		m+=0.2;
		//if(m>2.0){m=1.0;}
		j=m;
	}
	return 0;
}