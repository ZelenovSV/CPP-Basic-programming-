#include <iostream>
#include "Quadrilateral.h"

void Quadrilateral::get_name() { std::cout << name << std::endl; }
void Quadrilateral::get_sides() { std::cout << "�������: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl; }
void Quadrilateral::get_angles() { std::cout << "����: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl; }