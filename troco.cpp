#include <iostream>

using namespace std;

int main()
{
	double produto1;
	double produto2;
	double produto3;
	double produto4;
	double produto5;
	double pagamento;
	double troco; 
	
	cout <<" valor do produto1 ";
	cin >> produto1;
	cout<<" valor do produto2 " ;
	cin >> produto2;
	cout << " valor do produto3 " ;
	cin >> produto3;
	cout << " valor do produto4 " ;
	cin >> produto4;
	cout << " valor do produto5 " ;
	cin >> produto5;
	cout << " informe o valor do pagamento " ;
	cin >> pagamento;
	
	troco = pagamento - ( produto1 + produto2 + produto3 + produto4 + produto5);

cout << " o troco vai ser de " << troco << endl;
	return 0;
}