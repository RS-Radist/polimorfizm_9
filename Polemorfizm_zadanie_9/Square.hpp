#ifndef Square_hpp
#define Square_hpp
#include <stdio.h>
#include "Shape.hpp"
class Square:public Shape
{
    int leftAngle;
    int length;
    char* temp;
public:
    Square(){}
    Square(int _leftAngle, int _length):leftAngle(_leftAngle),length(_length){}
    ~Square(){}
    void Show();
    char* Load();
    void Save();
    int GetLength();
    int GetLeftAngle();
};
#endif /* Square_hpp */
