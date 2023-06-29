#include "Isosceles_Triangle .h"
#include "Domain_error.h"

Isosceles_Triangle::Isosceles_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
    : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle)
{
    name = "�������������� ����������� ";
    c_side = a_side;
    C_angle = 180 - A_angle - B_angle;
    a_side = c_side;
    A_angle = C_angle;
}
void Isosceles_Triangle::Print_info()
{
    cout << endl << "�������� ������: " << name << endl;
    try
    {
        cout << (check() ? "��������� �����" : "��������� ������� ") << endl;
        cout << "���������� ������: " << sides_count << endl;
        cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
    catch (const InvalidParameterError_180& ex) { cout << ex.what() << endl; }
    catch (const InvalidParameterError_Side_A_C& ex) { cout << ex.what() << endl; }
    catch (const InvalidParameterError_Angle_A_C& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "����������� ������! �� ��������" << std::endl; }
}

bool Isosceles_Triangle::check()
{
    if (!Triangle::check())
    {
        throw InvalidParameterError_180();
        return false;
    }
    if (c_side != a_side)
    {
        throw InvalidParameterError_Side_A_C();
        return false;
    }
    if (A_angle != C_angle)
    {
        throw InvalidParameterError_Angle_A_C();
        return false;
    }
    return true;
}