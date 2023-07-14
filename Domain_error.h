#pragma once


class Domain_error : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. "; }
};

// Исключения для треугольников

class InvalidParameterError_180 : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: сумма углов не равна 180 "; }
};

class InvalidParameterError_90 : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: угол С не равен 90 "; }
};

class InvalidParameterError_Side_A_C : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: сторона А не равена С "; }
};

class InvalidParameterError_Angle_A_C : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: угол А не равен С "; }
};

class InvalidParameterError_all_sides_are_not_equal : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Одна из сторон или все стороны не равны друг другу "; }
};

class InvalidParameterError_Angle_60 : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Один из углов или все углы не равны 60 "; }
};

// Исключения для четырехугольников 

class InvalidParameterError_360 : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: сумма углов не равна 360 "; }
};

class InvalidParameterError_Angle_90 : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Один из углов или все углы не равны 90 "; }
};

class InvalidParameterError_Side_A_C_B_D : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: Стороны A, C или B, D попарно не равны "; }
};

class InvalidParameterError_Angle_A_C_B_D : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. Причина: Углы A, C или B, D попарно не равны "; }
};
