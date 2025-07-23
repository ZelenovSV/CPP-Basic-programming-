#include "EquilateralTriangle.h"
#include "MyException.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C)
	: Triangle(a, b, c, A, B, C)
{
	Triangle::name = "Равносторонний треугольник";

	if ((a != b && b != c) && (A != B && B != C))
	{
		throw MyException("Стороны не равны, углы не равны 60 градусов");
	}
		if (a != b && b != c)
	{
		throw MyException("Стороны не равны");
	}

	if (A != B && B != C)
	{
		throw MyException("Углы не равны 60 градусов");
	}

};