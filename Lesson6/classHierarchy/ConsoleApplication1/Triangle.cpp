#include <iostream>
#include "Triangle.h"

void Triangle::get_name() { std::cout << name << std::endl; }
void Triangle::get_sides() { std::cout << "�������: " << " a=" << a << " b=" << b << " c=" << c << std::endl; }
void Triangle::get_angles() { std::cout << "����: " << " A=" << A << " B=" << B << " C=" << C << std::endl; }