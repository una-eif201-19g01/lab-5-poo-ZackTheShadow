#include "Secretaria.h"

Secretaria::Secretaria()
{
}

Secretaria::Secretaria(std::string id, int horasLab, float precioHora, int annosLaborados) : Trabajador(id, horasLab, precioHora, annosLaborados)
{
}

std::string Secretaria::reporteTrabajadores()
{
	std::string reporte = "";

	reporte = reporte + "Id del trabajador [" + getId() + "]\nSalario Neto [" + std::to_string(calcularSalarioNeto()) + "]\n";

	return reporte;
}