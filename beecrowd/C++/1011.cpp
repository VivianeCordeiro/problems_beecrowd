#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	double raio, volume;
	cin >> raio;
	volume = (4.0/3)*(3.14159)*pow(raio,3);
	printf("VOLUME = %.3f", volume);	
	cout << endl;

	return 0;
}