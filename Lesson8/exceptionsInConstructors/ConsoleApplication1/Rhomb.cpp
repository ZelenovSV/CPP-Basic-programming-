#include "Rhomb.h"
#include "MyException.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "Ромб";

	if ((a != b || b != c || c != d)
		&& (A != C || B != D))
	{
		throw MyException("Стороны не равны, углы попарно не равны");
	}

	if (a != b || b != c || c != d)
	{
		throw MyException("Стороны не равны");
	}

	if (A != C || B != D)
	{
		throw MyException("Углы попарно не равны");
	}
}