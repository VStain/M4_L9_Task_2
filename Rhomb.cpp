#include "Rhomb.h"
#include "Domain_error.h"

Rhomb::Rhomb(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle)
    : Quadrangle(a_side, b_side, c_side, d_side, A_angle, B_angle, C_angle, D_angle)
{
    name = "���� ";
    sides_count = 4;
    if (b_side != c_side && b_side != d_side && b_side != a_side)
    {
        throw InvalidParameterError_all_sides_are_not_equal();
    }

    if (A_angle != B_angle || C_angle != D_angle)
    {
        throw InvalidParameterError_Angle_A_C_B_D();
    }
}
void  Rhomb::Print_info()
{
    cout << "�������� ������: " << name << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << " d = " << d_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << " D = " << D_angle << endl << endl;
};

bool  Rhomb::check()
{
    if (!Quadrangle::check())
    {
        return false;
    }
    if (a_side != b_side && c_side != d_side && A_angle != B_angle && C_angle != D_angle)
    {
        return false;
    }
    return true;
}