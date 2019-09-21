#include "Trabajador.h"

class Secretaria : public Trabajador
{
public:

	Secretaria();

	Secretaria(std::string id, int horasLab, float precioHora, int annosLaborados);

	std::string reporteTrabajadores();
};
