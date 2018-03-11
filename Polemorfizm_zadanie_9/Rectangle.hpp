#ifndef Rectangle_hpp
#define Rectangle_hpp
#include <stdio.h>
#include "Shape.hpp"
class Rectangle:public Shape
{
    int topAngle;
    int size;
    char*temp;
public:
    Rectangle(){}
    Rectangle(int _topAngle,int _size):topAngle(_topAngle),size(_size){}
    void Show();
    char* Load();
    void Save();
    int GetTop();
    int GetSize();
};
#endif /* Rectangle_hpp */
