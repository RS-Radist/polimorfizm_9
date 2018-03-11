#include <iostream>
#include <fstream>
#include "Rectangle.hpp"
#include "Shape.hpp"
using namespace std;
void Rectangle::Show(){cout<<"Rectangle--->"<<GetTop()<<"/"<<GetSize();}
char* Rectangle::Load()
{
    string po="33";
    temp=new char[20];
    ifstream ss("polimorfizm_9.txt");
    ss.getline(temp,20);
    
    return temp;
}
void Rectangle::Save()
{
    ofstream save ("polimorfizm_9.txt",ios_base::app|ios_base::trunc);
    save<<"Rectangle--->>"<<GetTop()<<" "<<GetSize()<<endl;
}
int Rectangle::GetTop()
{
    return topAngle;
}
int Rectangle::GetSize()
{
    return size;
}
