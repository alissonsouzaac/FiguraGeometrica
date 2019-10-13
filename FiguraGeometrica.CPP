#include "FiguraGeometrica.h"
#include<iostream>
#include <string>
void FiguraGeometrica::calcularArea(int A){
	int a;
	
	
	cout << "Digite um lado:" << endl;
	cin >> a;
	A = a*a;
	
	cout << "A area é:" << A;
}
