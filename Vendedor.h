#include "Trabajador.h"

class Vendedor : public Trabajador
{

	float comision;
	int ventas;

public:

	Vendedor();

	Vendedor(std::string id, int horasLab, float precioHora, int annosLaborados, float comision, int ventas);

	virtual float salarioBrutoVendedor();

	std::string reporteVendedor();

	void setComision(float);

	void setVentas(int);

	int getVentas();

	float getComision();

	
};
