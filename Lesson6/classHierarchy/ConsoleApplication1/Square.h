#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral
{
public:
    Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, a, a, a, 90, 90, 90, 90)
    {
        name = " вадрат: ";

    }
};
