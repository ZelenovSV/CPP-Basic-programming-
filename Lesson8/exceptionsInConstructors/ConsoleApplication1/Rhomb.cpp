#include "Rhomb.h"
#include "MyException.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "����";

	if ((a != b || b != c || c != d)
		&& (A != C || B != D))
	{
		throw MyException("������� �� �����, ���� ������� �� �����");
	}

	if (a != b || b != c || c != d)
	{
		throw MyException("������� �� �����");
	}

	if (A != C || B != D)
	{
		throw MyException("���� ������� �� �����");
	}
}