#include <iostream>
#include "classes.hpp"
int main()
{
    //Задаем координаты первой точки прямоугольника1
    ts::Point rect1p1;
    std::cout << "Enter the coordinates of the first point of the rectangle: " << std::endl;
    std::cin >> rect1p1.x >> rect1p1.y;

    //Задаем координаты второй точки прямоугольника1 (Можно и так)

    ts::Point rect1p2;
    std::cout << "Enter the coordinates of the second point of the rectangle: " << std::endl;
    std::cin >> rect1p2.x >> rect1p2.y;

    ts::Rectangle rect1(rect1p1, rect1p2);

    std::cout<< "Rectangle's perimeter is: " << rect1.Perimeter() << std::endl;
    std::cout<< "Rectangle's square is: " << rect1.Square() << std::endl;

    return 0;
}