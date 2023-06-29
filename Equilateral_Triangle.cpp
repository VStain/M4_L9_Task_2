#include "Equilateral_Triangle.h"
#include "Domain_error.h"


Equilateral_Triangle::Equilateral_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
    : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle)
{
    name = "�������������� ����������� ";
}
/* { // �������������� ������� ������
    name = "�������������� ����������� ";
    sides_count = 3;
    c_side = this->a_side;
    b_side = this->a_side;
    B_angle = 60;
    C_angle = 60;
}*/
void Equilateral_Triangle::Print_info()
{
    cout << endl << "�������� ������: " << name << endl;
    try
    {
        cout << (check() ? "��������� �����" : "��������� ������� ") << endl;
        cout << "���������� ������: " << sides_count << endl;
        cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
    catch (InvalidParameterError_180& ex) { cout << ex.what() << endl; }
    catch (InvalidParameterError_all_sides_are_not_equal& ex) { cout << ex.what() << endl; }
    catch (InvalidParameterError_Angle_60& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "����������� ������! �� ��������" << std::endl; }
}

bool Equilateral_Triangle::check()
{
    if (!Triangle::check())
    {
        throw InvalidParameterError_180();
        return false;
    }
    if (A_angle != 60 || B_angle != 60 || C_angle != 60)
    {
        throw InvalidParameterError_Angle_60();
        return false;
    }
    if  (a_side != b_side && a_side != c_side)
    {
        throw InvalidParameterError_all_sides_are_not_equal();
        return false;
    }
    return true;
}