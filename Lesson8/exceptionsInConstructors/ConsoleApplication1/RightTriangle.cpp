#include "RightTriangle.h"
#include "Triangle.h"
#include "MyException.h"


RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C)
	: Triangle(a, b, c, A, B, C)
{
	Triangle::name = "������������� �����������";

	if (C != 90)
	{
		throw MyException("���� � �� ����� 90 ��������");
	}
};