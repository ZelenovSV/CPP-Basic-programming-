#include "Parallelogram.h"
#include "MyException.h"


Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "Параллелограм";

	if ((a != c || b != d)
		&& (A != C || B != D))
	{
		throw MyException("Стороны попарно не равны, углы попарно не равны");
	}

	if (a != c || b != d)
	{
		throw MyException("Стороны попарно не равны");
	}

	if (A != C || B != D)
	{
		throw MyException("Углы попарно не равны");
	}
}