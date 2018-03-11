#ifndef Ellipse_hpp
#define Ellipse_hpp
#include <stdio.h>
#include "Shape.hpp"
class Ellipse:public Shape
{
    int topAngle;
    char* temp;
public:
    Ellipse(){}
    Ellipse(int _topAngle):topAngle(_topAngle){}
    void Show();
    char* Load();
    void Save();
    int GetTopAngle();
};
#endif /* Ellipse_hpp */
