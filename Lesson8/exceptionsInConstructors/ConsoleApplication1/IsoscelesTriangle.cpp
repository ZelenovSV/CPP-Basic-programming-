#include "IsoscelesTriangle.h"
#include "MyException.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C)
	: Triangle(a, b, c, A, B, C)
{
	Triangle::name = "�������������� �����������";

	if (a != c && A != C)
	{
		throw MyException("������� a � c �� �����, ���� A � C �� �����");
	}

	if (A != C)
	{
		throw MyException("���� A � C �� �����");
	}

	if (a != c)
	{
		throw MyException("������� a � c �� �����");
	}
};