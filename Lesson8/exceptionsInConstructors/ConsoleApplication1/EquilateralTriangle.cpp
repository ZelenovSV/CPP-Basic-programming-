#include "EquilateralTriangle.h"
#include "MyException.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C)
	: Triangle(a, b, c, A, B, C)
{
	Triangle::name = "�������������� �����������";

	if ((a != b && b != c) && (A != B && B != C))
	{
		throw MyException("������� �� �����, ���� �� ����� 60 ��������");
	}
		if (a != b && b != c)
	{
		throw MyException("������� �� �����");
	}

	if (A != B && B != C)
	{
		throw MyException("���� �� ����� 60 ��������");
	}

};