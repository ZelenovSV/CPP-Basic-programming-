#pragma once
#include "Quadrilateral.h"

class Rectangle : public Quadrilateral
{
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, b, 90, 90, 90, 90)
    {
        name = "�������������: ";

    }
};
