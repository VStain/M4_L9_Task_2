#include "Class_RightTriangle.h"
#include "Domain_error.h"


Right_Triangle::Right_Triangle(int a_side, int b_side, int A_angle, int B_angle)
    : Triangle(a_side, b_side, sqrt(a_side* a_side + b_side * b_side), A_angle, B_angle)
{
    name = "������������� �����������";
    this->C_angle = 90;
}

void Right_Triangle::Print_info()
{
    cout << "�������� ������: " << name << endl;
    try 
    {
        cout << (check() ? "����������" : "������������") << endl;
        cout << "���������� ������: " << sides_count << endl;
        cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
    catch (const Domain_error& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "����������� ������! �� ��������" << std::endl; }
    
    
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
        throw Domain_error();
        return false;
    }
    return true;
}