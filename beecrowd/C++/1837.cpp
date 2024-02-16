#include <iostream>

using namespace std;

int main(){
	int a, b, q, r, f, e;
	cin >> a >> b;

	if(a<0){
		e=b;
		if(b<0){e=-b;}
		for(int r=0; r<e; r++){
			f=a-r;
			if(f%b==0)break;
		}
		q=f/b;
	}
	else{
		q=a/b;
		r=a%b;
	}
	
	cout << q;
	cout << " " << r << endl;


	return 0;
}