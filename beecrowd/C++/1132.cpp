#include <iostream>

using namespace std;

int main(){
	int x, y, soma=0, aux;
	cin >> x >> y;
	if(y<x){aux=x; x=y; y=aux;}
	for(int i=x; i<=y; i++)
	{
		if(i%13 != 0){soma+=i;}
	}
	cout << soma;
	return 0;
}