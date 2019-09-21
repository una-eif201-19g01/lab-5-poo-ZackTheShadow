#include "Gerente.h"

Gerente::Gerente()
{
}

Gerente::Gerente(std::string id, int horasLab, float precioHora, int annosLaborados, float bono) : Trabajador(id, horasLab, precioHora, annosLaborados) , bono(bono)
{
}

float Gerente::salarioBrutoGerente()
{
	return calcularSalarioBruto() + getBono();
}

std::string Gerente::reporteGerente()
{
	std::string reporte = "";

	reporte = reporte + "Id del trabajador [" + getId() + "]\nSalario Neto [" + std::to_string(salarioBrutoGerente() - calcularCargas()) + "]\n";

	return reporte;
}

void Gerente::setBono(float Bono)
{
	bono = Bono;
}

float Gerente::getBono()
{
	return bono;
}
