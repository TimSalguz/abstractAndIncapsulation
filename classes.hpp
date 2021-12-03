#pragma once

namespace ts
{
    struct Point
    {
        double x;
        double y;
    };

    class Rectangle
    {
    public:
        //Создаю конструктор, передаю в него параметры, обе точки
        Rectangle::Rectangle(Point A, Point B);

        //Создаю деструктор
        ~Rectangle() {/*std::cout << "Destructor's end" << std::endl;*/}

        //Создаю функцию в классе:
        double Perimeter();

        double Square();

    private:
        //Ultrasecret calculations!

        Point m_P1;
        Point m_P2;
    };
}