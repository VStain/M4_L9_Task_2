#include "Class_Triangle.h"
#include "Domain_error.h"

Triangle::Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
{
    name = "����������� ";
    sides_count = 3;
    this->a_side = a_side;
    this->b_side = b_side;
    this->c_side = c_side;
    this->A_angle = A_angle;
    this->B_angle = B_angle;
    this->C_angle = C_angle;
    if (A_angle + B_angle + C_angle != 180)
    {
        throw InvalidParameterError_180();
    }
}

void Triangle::Print_info()
{
    cout << endl << "�������� ������: " << name << endl;
    //cout << (check() ? "��������� �����" : "��������� ������� ") << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
}

bool Triangle::check()
{
   if (A_angle + B_angle + C_angle != 180)
   {
      return false;
   }
   return true;
 
   return Figure::check();
}