#include <iostream>

using namespace std;

int main(){
	int A, B, C;

	cin >> A >> B >> C;

	
	//if((A<B) && (B>=C)){cout << ":(" <<endl;}
	if((A<B) && (B<C))
	{
		if((B-A)>(C-B)){cout << ":(" <<endl;}
		else if((C-B)>=(B-A)){cout << ":)" <<endl;}
	}


	else if((A>B) && (C>=B)){cout << ":)" <<endl;}
	else if((A>B) && (B>C))
	{
		if((B-C)<(A-B)){cout << ":)" <<endl;}
		else if((B-C)>=(A-B)){cout << ":(" <<endl;}	
	}
	else if((A==B) && B<C){cout << ":)" <<endl;}
	else if((A==B) && B>C){cout << ":(" <<endl;}
	else{cout << ":(" <<endl;}


	return 0;
}