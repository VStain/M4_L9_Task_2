#include "Class_RightTriangle.h"
#include "Domain_error.h"


Right_Triangle::Right_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle)
    : Triangle(a_side, b_side, c_side, A_angle, B_angle, C_angle)
{
    name = "Прямоугольный треугольник";
    // this->C_angle = 90; // старая защита при которой угол С всегда равен 90
}

void Right_Triangle::Print_info()
{
    cout << endl << "Название фигуры: " << name << endl;
    try 
    {
        cout << (check() ? "Параметры верны" : "Параметры неверны ") << endl;
        cout << "Количество сторон: " << sides_count << endl;
        cout << "Стороны: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
        cout << "Углы: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
    }
    catch (const InvalidParameterError_90& ex) { cout << ex.what() << endl; }
    catch (const InvalidParameterError_180& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }
    
    
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