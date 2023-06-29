#pragma once

#include "Class_Triangle.h"

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(int a_side, int b_side, int c_side, int A_angle, int B_angle, int C_angle);

    void Print_info() override;
    bool check() override;
};