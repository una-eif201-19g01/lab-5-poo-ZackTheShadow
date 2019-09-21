#include "Trabajador.h"

Trabajador::Trabajador()
{
}

Trabajador::Trabajador(std::string id, int horasLab, float precioHora, int annosLaborados) : id(id), horasLab(horasLab), precioHora(precioHora), annosLaborados(annosLaborados)
{
}

Trabajador::~Trabajador()
{
}

float Trabajador::calcularSalarioBase()
{
	return Trabajador::getPrecioHora() * 48;
}

float Trabajador::calcularHorasExtra()
{
	float horas = 0;

	if (getHorasLab() >= 48) {
		for (int cont = getHorasLab(); cont > 48; cont--)
		{
			horas = horas + (getPrecioHora() + (getPrecioHora() * 0.50));
		}
	}
	return horas;
}

float Trabajador::calcularAnualidades()
{
	return ((calcularSalarioBase() * 0.05) * getAnnosLaborados());
}

float Trabajador::calcularSalarioBruto()
{
	return calcularSalarioBase() + calcularHorasExtra() + calcularAnualidades();
}

float Trabajador::calcularCargas()
{
	return (calcularSalarioBruto() * 0.09);
}

float Trabajador::calcularSalarioNeto()
{
	return calcularSalarioBruto() - calcularCargas();
}

void Trabajador::setId(std::string ident)
{
	id = ident;
}

void Trabajador::setHorasLab(int horas)
{
	horasLab = horas;
}

void Trabajador::setPrecioHora(float precio)
{
	precioHora = precio;
}

void Trabajador::setAnnosLaborados(int annos)
{
	annosLaborados = annos;
}

std::string Trabajador::getId()
{
	return id;
}

int Trabajador::getHorasLab()
{
	return horasLab;
}

float Trabajador::getPrecioHora()
{
	return precioHora;
}

int Trabajador::getAnnosLaborados()
{
	return annosLaborados;
}

