#include <string.h>
#include <iostream>
#include <string>

class Trabajador
{
private:

	std::string id;
	int horasLab;
	float precioHora;
	int annosLaborados;


public:
	Trabajador();

	Trabajador(std::string id, int horasLab, float precioHora, int annosLaborados);

	~Trabajador();

	virtual float calcularSalarioBase();

	virtual float calcularHorasExtra();

	virtual float calcularAnualidades();

	virtual float calcularSalarioBruto();

	virtual float calcularCargas();

	virtual float calcularSalarioNeto();

	void setId(std::string);

	void setHorasLab(int);

	void setPrecioHora(float);

	void setAnnosLaborados(int);

	std::string getId();

	int getHorasLab();

	float getPrecioHora();

	int getAnnosLaborados();

};

