#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
	double A, B, C;
	double area;

	cin >> A >> B >> C;

	//Area Triangulo
	area = (A*C)/2.0;
	printf("TRIANGULO: %.3f", area);
	cout << endl;	

	//Area Circulo
	area = 3.14159 * pow(C, 2);
	printf("CIRCULO: %.3f", area);
	cout << endl;

	//Area Trapezio
	area = (C*(A+B))/2;
	printf("TRAPEZIO: %.3f", area);
	cout << endl;

	//Area Quadrado
	area = pow(B, 2);
	printf("QUADRADO: %.3f", area);
	cout << endl;

	//Area Retangulo
	area = A*B;
	printf("RETANGULO: %.3f", area);
	cout << endl;



	return 0;
}