#include <iostream>
#include <fstream>
#include "Square.hpp"
#include "Shape.hpp"
#include <string>
using namespace std;

void Square::Show()
{
    cout<<"Square---> "<<GetLength()<<"   "<<GetLeftAngle();
}
char* Square::Load()
{
    temp=new char[20];
    ifstream ss("polimorfizm_9.txt");
    ss.getline(temp,20);
   
    return temp;
  
}
void Square::Save()
{
    ofstream save ("polimorfizm_9.txt",ios_base::app|ios_base::trunc);
    save<<"Square--->>"<<GetLength()<<" "<<GetLeftAngle()<<endl;
}
int Square::GetLength()
{
    return length;
}
int Square::GetLeftAngle()
{
    return leftAngle;
}
