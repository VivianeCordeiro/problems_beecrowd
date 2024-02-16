#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int N;
	char  tipo;
	float percentualCoelhos, percentualRatos, percentualSapos; 
	float quantia, coelhos=0, ratos=0, sapos=0, total;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> quantia >> tipo;
		if(tipo == 'C'){coelhos += quantia;}
		if(tipo == 'R'){ratos += quantia;}
		if(tipo == 'S'){sapos += quantia;}
	}
	total=coelhos+ratos+sapos;
	percentualCoelhos = 100*coelhos/total;
	percentualRatos = 100*ratos/total;
	percentualSapos = 100*sapos/total;

	cout << "Total: "<< total <<" cobaias" << endl;
	cout << "Total de coelhos: " << coelhos << endl;
	cout << "Total de ratos: " << ratos << endl;
	cout << "Total de sapos: " << sapos << endl;

	cout << "Percentual de coelhos: " << fixed << setprecision(2) << percentualCoelhos << " %" << endl;
    	cout << "Percentual de ratos: " << fixed << setprecision(2) << percentualRatos << " %" << endl;
    	cout << "Percentual de sapos: " << fixed << setprecision(2) << percentualSapos << " %" << endl;
	
	return 0;
}