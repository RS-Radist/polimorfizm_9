#ifndef Circle_hpp
#define Circle_hpp
#include <stdio.h>
#include "Shape.hpp"
class Circle:public Shape
{
    int zentr;
    int radius;
    char*temp;
public:
    Circle(){}
    Circle(int _zentr,int _radius):zentr(_zentr),radius(_radius){}
    void Show();
    char* Load();
    void Save();
    int GetZentr();
    int GetRadius();
};
#endif /* Circle_hpp */
