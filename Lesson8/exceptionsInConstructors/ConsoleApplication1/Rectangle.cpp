#include "Rectangle.h"
#include "MyException.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
	: Quadrilateral(a, b, c, d, A, B, C, D)
{
	Quadrilateral::name = "�������������";

	if ((a != c || b != d) && (A != 90 || B != 90 || C != 90 || D != 90))
	{
		throw MyException("������� ������� �� �����, ���� �� ����� 90 ��������");
	}

	if (a != c || b != d)
	{
		throw MyException("������� ������� �� �����");
	}

	if (A != 90 || B != 90 || C != 90 || D != 90)
	{
		throw MyException("���� �� ����� 90 ��������");
	}
}