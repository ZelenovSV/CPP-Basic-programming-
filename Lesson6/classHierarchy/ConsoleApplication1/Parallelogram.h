#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, a, b, A, B, A, B)
    {
        name = "��������������: ";

    }
};