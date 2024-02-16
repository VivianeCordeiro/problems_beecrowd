#include <iostream>

using namespace std;

int main(){
	int k, n, m, x, y;
	cin >> k;
	while(k>0){
		cin >> n >> m;
		for(int i=0; i<k; i++){
			cin >> x >> y;
			if(x==n || y==m){cout << "divisa" << endl;}
			else{
				if(x<n){
					if(y>m){cout << "NO" << endl;}
					else{cout << "SO" << endl;}
				}
				if(x>n){
					if(y>m){cout << "NE" << endl;}
					else{cout << "SE" << endl;}
				}
			}
		
		}
		cin >> k; 
	}
	return 0;
}