#include "Trabajador.h"

class Gerente : public Trabajador
{

	float bono;

public:

	Gerente();

	Gerente(std::string id, int horasLab, float precioHora, int annosLaborados, float bono);

	float salarioBrutoGerente();

	std::string reporteGerente();

	void setBono(float);

	float getBono();
};
