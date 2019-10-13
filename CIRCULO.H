#ifndef Circulo_H_INCLUDED
#define Circulo_H_INCLUDED
#include <string>
#include "FiguraGeometrica.h"

using namespace std;
class Circulo: public FiguraGeometrica {
	// Private section
	public:
		// Public Declarations
		string nome;
		int r;
		void calcularArea(int r);
	protected:
		// Protected Declarations
};

#endif
