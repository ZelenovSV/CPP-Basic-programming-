#include "Rectangle.h"
#include "MyException.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "Прямоугольник";

	if ((a != c || b != d) && (A != 90 || B != 90 || C != 90 || D != 90))
	{
		throw MyException("Стороны попарно не равны, углы не равны 90 градусов");
	}

	if (a != c || b != d)
	{
		throw MyException("Стороны попарно не равны");
	}

	if (A != 90 || B != 90 || C != 90 || D != 90)
	{
		throw MyException("Углы не равны 90 градусов");
	}
}