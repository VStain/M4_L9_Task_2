/*
Задача 2. Исключения в конструкторах

В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.

Создайте собственный класс исключения для ошибки создания геометрической фигуры. Подумайте, от какого типа его унаследовать, и не забудьте 
поместить новый класс в отдельную пару файлов.

Возьмите иерархию классов из предыдущего задания. Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают 
на вход конструктору. Если аргументы не соответствуют ограничениям, объект не должен быть создан, а на консоль должно быть выведено соответствующее 
сообщение. Причина ошибки должна быть сформулирована на уровне конструктора и выведена на экран при обработке ошибок.

Ограничения:

- треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
- прямоугольный треугольник (угол C всегда равен 90);
- равнобедренный треугольник (стороны a и c равны, углы A и C равны);
- равносторонний треугольник (все стороны равны, все углы равны 60);
- четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
- прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
- квадрат (все стороны равны, все углы равны 90);
- параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
- ромб (все стороны равны, углы A,C и B,D попарно равны).

Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные. В случае успешного создания выводите на экран 
сообщение об успешном создании и параметры фигуры. В случае, если создание не удалось, выведите причину ошибки.

Пример работы программы

Консоль:
Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
Ошибка создания фигуры. Причина: сумма углов не равна 180
*/

#include <cmath>
#include "Class_Figure.h"
#include "Class_Triangle.h"
#include "Class_RightTriangle.h"
#include "Isosceles_Triangle .h"
#include "Equilateral_Triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "Domain_error.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");


    Figure figure;

    int a_side = 0;
    int b_side = 0;
    int c_side = 0;
    int A_angle = 0;
    int B_angle = 0;
    int C_angle = 0;

    /*cout << "Введите значение a_side: ";
    cin >> a_side;

    cout << "Введите значение b_side: ";
    cin >> b_side;

    cout << "Введите значение с_side: ";
    cin >> c_side;

    cout << "Введите значение A_angle: ";
    cin >> A_angle;

    cout << "Введите значение B_angle: ";
    cin >> B_angle;

    cout << "Введите значение B_angle: ";
    cin >> C_angle;
    */

    /*
    
    cout << "Треугольник " << endl;
    try
    {
        Triangle triangle(10, 10, 10, 60, 60, 90);
        Print_info(&triangle);
    }
    catch (const exception& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

     cout << endl << "Прямогольник " << endl;
     try 
     {
         Right_Triangle right_triangle(10, 10, 10, 60, 60, 60);
         Print_info(&right_triangle);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

     cout << endl << "Равнобедренный треугольник " << endl;
     try
     {
         Isosceles_Triangle isosceles_triangle(10, 10, 20, 60, 60, 60);
         Print_info(&isosceles_triangle);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

     cout << endl << "Равносторонний треугольник " << endl;
     try
     {
         Equilateral_Triangle Equilateral_Triangle(10, 10, 20, 60, 60, 60);
         Print_info(&Equilateral_Triangle);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

    */


     cout << endl << "Четырехугольник " << endl;
     try
     {
         Quadrangle Quadrangle(10, 20, 30, 40, 100, 50, 50, 60);
         Print_info(&Quadrangle);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

     cout << endl << "Прямоугольник " << endl;
     try
     {
         Rectangle Rectangle(10, 20, 30, 40, 100, 60, 100, 100);
         Print_info(&Rectangle);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

     cout << endl << "Квадрат " << endl;
     try
     {
         Square Square(10, 10, 10, 10, 100, 60, 100, 100);
         Print_info(&Square);
     }
     catch (const exception& ex) { cout << ex.what() << endl; }
     catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }

    cout << endl << "Параллелограмм " << endl;
    try
    {
        Parallelogram Parallelogram(30, 30, 30, 30, 100, 60, 100, 100);
        Print_info(&Parallelogram);
    }
    catch (const exception& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }


    cout << endl << "Ромб " << endl;
    try
    {
        Rhomb Rhomb(10, 10, 10, 10, 100, 60, 100, 100);
        Print_info(&Rhomb); 
    }
    catch (const exception& ex) { cout << ex.what() << endl; }
    catch (...) { cout << "Неизвестная ошибка! До свидания" << std::endl; }


    return 0;

}