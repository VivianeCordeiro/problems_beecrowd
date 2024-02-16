#include <iostream>

using namespace std;

int main(){
	int n;
	float x, y;
	float resultado;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x >> y;
		if(y==0){cout << "divisao impossivel" << endl;}
		else{
			resultado = x / y;
			printf("%.1f\n", resultado);
		}
	}

return 0;
}