#include <iostream>
#include <string>

class Figure {
protected:
    int numberPoint;
    std::string name;
public:
    int getPoint()
    {
        return numberPoint;
    }
    std::string getName()
    {
        return name;
    }
    Figure()
    {
        numberPoint = 0;
        name = "";
    }
    virtual void printInfo()
    {
        std::cout << name << std::endl;
        std::cout << std::endl;
    }
};
class Triangle : public Figure
{
protected:
    int a = 10;
    int b = 20;
    int c = 30;
    int A = 30;
    int B = 70;
    int C = 80;
public:
    Triangle(int a, int b, int c, int A, int B, int C)
    {
        numberPoint = 3;
        
        this->a = a;
        this->b = b;
        this->c = c;
        
        this->A = A;
        this->B = B;
        this->C = C;

        this->name = "Треугольник";
    }
    void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
};
class Quadrilateral : public Figure
{
protected:
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int A = 30;
    int B = 40;
    int C = 50;
    int D = 60;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        numberPoint = 4;

        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;

        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        this->name = "Четырехугольник";
    }
    void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
};
class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60)
    {
        this->name = "Равносторонний треугольник";
    }
        void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
};
class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A)
    {
       this->name = "Равнобедренный треугольник : ";
    }
    void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
};
class RightTriangle : public Triangle
{
public:
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
    {
        this->name = "Прямоугольный треугольник: ";
    }
    void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }
};
class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, a, b, A, B, A, B)
    {
        this->name = "Параллелограмм: ";
    }
    void printInfo() override
    {
        std::cout << name << std::endl;
        std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    }
};
class Rectangle : public Quadrilateral
    {
    public:
        Rectangle(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90)
        {
            this->name = "Прямоугольник: ";
        }
        void printInfo() override
        {
            std::cout << name << std::endl;
            std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
            std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
            std::cout << std::endl;
        }
    };
class Square : public Quadrilateral
    {
    public:
        Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90)
        {
            this->name = "Квадрат: ";
        }
        void printInfo() override
        {
            std::cout << name << std::endl;
            std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
            std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
            std::cout << std::endl;
        }
    };
class Rhombus : public Quadrilateral
    {
    public:
        Rhombus(int a, int A, int B) : Quadrilateral(a, a, a, a, A, B, A, B)
        {
            this->name = "Ромб: ";
        }
        void printInfo() override
        {
            std::cout << name << std::endl;
            std::cout << "Стороны: " << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
            std::cout << "Углы: " << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
            std::cout << std::endl;
        }
    };

void print_info(Figure* figure)
    {
        figure->printInfo();
    }

int main()
    {
        setlocale(LC_ALL, "Russian");

        Triangle triangle(10, 20, 30, 50, 60, 70);
        print_info(&triangle);

        RightTriangle rightTriangle(10, 20, 30, 50, 60);
        print_info(&rightTriangle);

        IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
        print_info(&isoscelesTriangle);

        EquilateralTriangle equilateralTriangle(30);
        print_info(&equilateralTriangle);

        Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
        print_info(&quadrilateral);

        Rectangle rectangle(10, 20);
        print_info(&rectangle);

        Square square(20);
        print_info(&square);

        Parallelogram parallelogram(20, 30, 30, 40);
        print_info(&parallelogram);

        Rhombus rhombus(30, 30, 40);
        print_info(&rhombus);

        return 0;
    }