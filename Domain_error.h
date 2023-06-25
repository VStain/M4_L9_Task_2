#pragma once


class Domain_error : public exception
{
public:
    const char* what() const override { return "Ошибка создания фигуры. "; }
};
