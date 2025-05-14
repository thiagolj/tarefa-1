#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
	double x;
	double y;
    double elevado;
	
	cout <<" informe o valor de x ";
	cin >> x;
	cout<< " informe o valor de y ";
	cin>>y;
	
	elevado = pow(x, y);
	
	cout << " o valor elevado e " << elevado << endl ;
}