#include <iostream>

using namespace std;

int main(){
	int repeticao=1, grenais=0, empates=0, vitoriaInter=0, vitoriaGremio=0, inter, gremio;
	while(repeticao == 1){
		
		cin >> inter>> gremio;

		grenais++;

		if(inter > gremio){vitoriaInter++;}
		if(inter < gremio){vitoriaGremio++;}
		else{
			if(inter == gremio){empates++;}
		}

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> repeticao;
	
	}
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << vitoriaInter<< endl;
	cout << "Gremio:" << vitoriaGremio<< endl;
	cout << "Empates:" << empates << endl;
	if(vitoriaInter > vitoriaGremio){
		cout << "Inter venceu mais" << endl;	
	}
	else{
		cout << "Gremio venceu mais" << endl;
	}

	return 0;

}