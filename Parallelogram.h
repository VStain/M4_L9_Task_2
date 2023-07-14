#pragma once

#include "Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(int a_side, int b_side, int c_side, int d_side, int A_angle, int B_angle, int C_angle, int D_angle);
    void Print_info() override;
    bool check() override;
};