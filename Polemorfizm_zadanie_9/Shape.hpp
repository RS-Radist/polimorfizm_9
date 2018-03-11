#ifndef Shape_hpp
#define Shape_hpp
#include <stdio.h>
class Shape
{
public:
    virtual void Show()=0;
    virtual char* Load()=0;
    virtual void Save()=0;
};
#endif /* Shape_hpp */
