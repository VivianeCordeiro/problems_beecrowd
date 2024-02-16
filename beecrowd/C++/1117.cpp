#include <iostream>

using namespace std;

int main ()
{
	float nota, soma, media;
	int quantidade=0;
	while(quantidade<2)
	{
		cin >> nota;
		if(nota<0 || nota>10){cout << "nota invalida" << endl;}
		else
		{
			soma += nota;
			quantidade++;
		}
	}
	media=soma/2.0;
	printf("media = %.2f\n", media);


	return 0;
}