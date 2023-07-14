#include "Rectangle.h"
#include "Domain_error.h"

Rectangle::Rectangle(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "Прямоугольник ";
    sides_count = 4;
    if (A_angle != 90 || B_angle != 90 || C_angle != 90 || D_angle != 90)
    {
        throw InvalidParameterError_Angle_90();
    }
    if (c_side != a_side || d_side != b_side)
    {
        throw InvalidParameterError_Side_A_C_B_D();
    }

}
void Rectangle::Print_info()
{
    cout << "Название фигуры: " << name << endl;
    cout << "Количество сторон: " << sides_count << endl;
    cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
}

bool Rectangle::check()
{
    if (!Quadrangle::check())
    {
        return false;
    }
    if (C_angle != 90)
    {
        return false;
    }
    return true;
}

