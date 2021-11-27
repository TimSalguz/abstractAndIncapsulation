#include <iostream>

struct Point
{
    double x;
    double y;
};

class Rectangle
{
public:
    //Создаю конструктор, передаю в него параметры, обе точки
    Rectangle(Point A, Point B)
    {
        m_P1 = A;
        m_P2 = B;
        if((abs(m_P1.x-m_P2.x))*(abs(m_P1.y-m_P2.y))==0)
        {
            m_P2.x = m_P1.x+10;
            m_P2.y = m_P1.y+20;
            std::cout << "This rectangle doesn't exist!.\n"
                         "Point 2 is set at coordinates x = "
                         << m_P2.x << ", y = " << m_P2.y << std::endl;
        }
        //std::cout << "Constructor's end" << std::endl;
    }


    //Создаю деструктор
    ~Rectangle()
    {
        //std::cout << "Destructor's end" << std::endl;
    }

    //Создаю функцию в классе:
    double Perimeter()
    {
        //std::cout << "Perimeter Function" << std::endl;

        return (abs(m_P1.x-m_P2.x))*2+(abs(m_P1.y-m_P2.y))*2;
    }

    double Square()
    {
        //std::cout << "Square Function" << std::endl;
        return (abs(m_P1.x-m_P2.x))*(abs(m_P1.y-m_P2.y));
    }
private:
    //Ultrasecret calculations!

    Point m_P1;
    Point m_P2;
};

int main()
{
    //Задаем координаты первой точки прямоугольника1
    Point rect1p1;
    std::cout << "Enter the coordinates of the first point of the rectangle: " << std::endl;
    std::cin >> rect1p1.x >> rect1p1.y;

    //Задаем координаты второй точки прямоугольника1 (Можно и так)

    Point rect1p2;
    std::cout << "Enter the coordinates of the second point of the rectangle: " << std::endl;
    std::cin >> rect1p2.x >> rect1p2.y;


    Rectangle rect1(rect1p1, rect1p2);

    std::cout<< "Rectangle's perimeter is: " << rect1.Perimeter() << std::endl;
    std::cout<< "Rectangle's square is: " << rect1.Square() << std::endl;

    return 0;
}