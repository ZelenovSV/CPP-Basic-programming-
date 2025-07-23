#pragma once
#include "Quadrilateral.h"

class Rhombus : public Quadrilateral
{
public:
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, a, a, a, A, B, A, B)
    {
        name = "Ромб: ";

    }
};