#include "Vendedor.h"

Vendedor::Vendedor()
{
}

Vendedor::Vendedor(std::string id, int horasLab, float precioHora, int annosLaborados, float comision, int ventas) : Trabajador(id, horasLab, precioHora, annosLaborados), comision(comision), ventas (ventas)
{
}

float Vendedor::salarioBrutoVendedor()
{
	return calcularSalarioBruto() + (getComision()* getVentas());
}

std::string Vendedor::reporteVendedor()
{
	std::string reporte = "";

	reporte = reporte + "Id del trabajador [" + getId() + "]\nSalario Neto [" + std::to_string(salarioBrutoVendedor() - calcularCargas()) + "]\n";

	return reporte;
}

void Vendedor::setComision(float Comision)
{
	comision = Comision;
}

void Vendedor::setVentas(int Ventas)
{
	ventas = Ventas;
}

int Vendedor::getVentas()
{
	return ventas;
}

float Vendedor::getComision()
{
	return comision;
}
