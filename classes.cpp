#pragma once
#include "classes.hpp"
#include <iostream>

namespace ts
{
    Rectangle::Rectangle(Point A, Point B)
    {
        m_P1 = A;
        m_P2 = B;
        if ((abs(m_P1.x - m_P2.x)) * (abs(m_P1.y - m_P2.y)) == 0)
        {
            m_P2.x = m_P1.x + 10;
            m_P2.y = m_P1.y + 20;
            std::cout << "This rectangle doesn't exist!.\n"
                         "Point 2 is set at coordinates x = "
                      << m_P2.x << ", y = " << m_P2.y << std::endl;
        }
        //std::cout << "Constructor's end" << std::endl;
    }
    double Rectangle::Perimeter()
    {
        return (abs(m_P1.x - m_P2.x)) * 2 + (abs(m_P1.y - m_P2.y)) * 2;
    }
    double Rectangle::Square()
    {
        //std::cout << "Square Function" << std::endl;
        return (abs(m_P1.x-m_P2.x))*(abs(m_P1.y-m_P2.y));
    }
}