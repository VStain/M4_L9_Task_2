#include "Class_RightTriangle.h"
#include "Domain_error.h"


Right_Triangle::Right_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
    : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle)
{
    name = "������������� �����������";
    // this->C_angle = 90; // ������ ������ ��� ������� ���� � ������ ����� 90
    if (C_angle != 90)
    {
        throw InvalidParameterError_90();
    }
    if (A_angle + B_angle + C_angle != 180)
    {
        throw InvalidParameterError_180();
    }
}

void Right_Triangle::Print_info()
{
    cout << endl << "�������� ������: " << name << endl;
    cout << (check() ? "��������� �����" : "��������� ������� ") << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
        
}
bool Right_Triangle::check()
{
    if (!Triangle::check())
    {
        throw Domain_error();
        return false;
    }
    if (C_angle != 90)
    {
        throw InvalidParameterError_90();
        return false;
    }
    return true;
}