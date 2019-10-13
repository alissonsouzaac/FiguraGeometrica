#ifndef Triangulo_H_INCLUDED
#define Triangulo_H_INCLUDED
#include "FiguraGeometrica.h"
#include <string>
#include <iostream>

using namespace std;

class Triangulo: public FiguraGeometrica {
	// Private section
	public:
		// Public Declarations
		string nome;
		int b;
		int h;	
	void calcularArea(int b, int h);	
	protected:
		// Protected Declarations
};

#endif
