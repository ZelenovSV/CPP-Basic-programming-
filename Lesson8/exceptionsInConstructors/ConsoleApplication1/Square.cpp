#include "Square.h"


Square::Square(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "Квадрат";

	if ((a != b || b != c || c != d)
		&& (A != 90 || B != 90 || C != 90 || D != 90))
	{
		throw MyException("Стороны не равны, углы не равны 90 градусов");
	}

	if (a != b || b != c || c != d)
	{
		throw MyException("Стороны не равны");
	}

	if (A != 90 || B != 90 || C != 90 || D != 90)
	{
		throw MyException("Углы не равны 90 градусов");
	}
}