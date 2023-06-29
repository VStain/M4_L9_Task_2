#pragma once


class Domain_error : public exception
{
public:
    const char* what() const override { return "������ �������� ������. "; }
};


class InvalidParameterError_180 : public exception
{
public:
    const char* what() const override { return "������ �������� ������. �������: ����� ����� �� ����� 180 "; }
};

class InvalidParameterError_90 : public exception
{
public:
    const char* what() const override { return "������ �������� ������. �������: ���� � �� ����� 90 "; }
};

class InvalidParameterError_Side_A_C : public exception
{
public:
    const char* what() const override { return "������ �������� ������. �������: ������� � �� ������ � "; }
};

class InvalidParameterError_Angle_A_C : public exception
{
public:
    const char* what() const override { return "������ �������� ������. �������: ���� � �� ����� � "; }
};

class InvalidParameterError_all_sides_are_not_equal : public exception
{
public:
    const char* what() const override { return "������ �������� ������. ���� �� ������ ��� ��� ������� �� ����� ���� ����� "; }
};

class InvalidParameterError_Angle_60 : public exception
{
public:
    const char* what() const override { return "������ �������� ������. ���� �� ����� ��� ��� ���� �� ����� 60 "; }
};