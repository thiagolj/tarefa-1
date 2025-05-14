#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double diametro;
	double area;
	double raio;
	cout << " informe o diametro ";
	cin >> diametro;
	
   raio = diametro/2;
   
    area = (raio * raio) * 3.14 ;
   	cout << " a area do circulo e " << area << endl;
	
}