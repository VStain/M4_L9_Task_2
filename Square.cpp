#include "Square.h"
#include "Domain_error.h"

Square::Square(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "������� ";
    sides_count = 4;
    if (b_side != c_side != d_side != a_side)
    {
        throw InvalidParameterError_all_sides_are_not_equal();
    }
    if (A_angle != 90 && B_angle != 90 && C_angle != 90 && D_angle != 90)
    {
        throw InvalidParameterError_Angle_90();
    }
}
void Square::Print_info()
{
    cout << "�������� ������: " << name << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
}

bool Square::check()
{
    if (!Quadrangle::check())
    {
        return false;
    }
    if (a_side != b_side != c_side != d_side && A_angle != 90 && B_angle != 90 && C_angle != 90 && D_angle != 90)
    {
        return false;
    }
    return true;
}

