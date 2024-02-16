#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	double X, Y, consumoMedio;
	cin >> X >> Y;
	consumoMedio = X/Y;
	printf("%.3f km/l\n", consumoMedio);

	return 0;
}