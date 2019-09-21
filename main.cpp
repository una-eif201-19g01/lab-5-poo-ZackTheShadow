#include "Secretaria.h"
#include "Gerente.h" 
#include "Vendedor.h"
#include "Trabajador.h"
#include <vector>
#include<iostream>

int main()
{



	Gerente gerente("A1", 70, 5000, 10, 1000);

	std::cout << gerente.reporteGerente() << std::endl;

	Secretaria secretaria("A2", 70, 5000, 10);

	std::cout << secretaria.reporteTrabajadores() << std::endl;

	Vendedor vendedor("A3", 70, 5000, 10, 1000, 500);

	std::cout << vendedor.reporteVendedor() << std::endl;

	return 0;
};