#include "PrintFigure.h"
#include <iostream>
#include "Figure.h"
#include "MyException.h"
#include <exception>



void printFigure(Figure* figure)
{
	std::cout << std::endl;
	std::cout << figure->get_name() << ":" << std::endl;

	std::cout << "�������: ";
	std::cout << " a = " << figure->get_a() << ", b = " << figure->get_b() << ", c = " << figure->get_c();
	if (figure->get_HaveFourSides())
	{
		std::cout << ", d = " << figure->get_d() << std::endl;
	}
	else { std::cout << std::endl; }

	std::cout << "����: ";
	std::cout << " A = " << figure->get_A() << ", B = " << figure->get_B() << ", C = " << figure->get_C();
	if (figure->get_HaveFourSides()) { std::cout << ", D = " << figure->get_D() << std::endl; }
	else { std::cout << std::endl; }
}