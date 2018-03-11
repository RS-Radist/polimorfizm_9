#include <iostream>
#include <fstream>
#include "Ellipse.hpp"
#include "Shape.hpp"
using namespace std;

void Ellipse::Show()
{
    cout<<"Ellipse--->"<<GetTopAngle();
}
char* Ellipse::Load()
{
    temp=new char[20];
    ifstream ss("polimorfizm_9.txt");
    ss.getline(temp,20);
    return temp;
}

void Ellipse::Save()
{
    ofstream save ("polimorfizm_9.txt",ios_base::app|ios_base::trunc);
    save<<"Ellipse--->>"<<GetTopAngle()<<endl;
    
}
int Ellipse::GetTopAngle()
{
    return topAngle;
}
