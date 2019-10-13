#ifndef Quadrado_H_INCLUDED
#define Quadrado_H_INCLUDED
#include "FiguraGeometrica.h"
#include <string>

using namespace std;
class Quadrado : public FiguraGeometrica {
	// Private section
	public:
		// Public Declarations
		string nome;
		int Q;
		
		void calcularArea(int Q);
	protected:
		// Protected Declarations
};

#endif
