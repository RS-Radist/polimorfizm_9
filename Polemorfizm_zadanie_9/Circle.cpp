#include <iostream>
#include <fstream>
#include "Circle.hpp"
using namespace std;

void Circle::Show(){cout<<"Circle--->"<<GetZentr()<<"/"<<GetRadius();}
char* Circle::Load()
{
    temp=new char[20];
    ifstream ss("polimorfizm_9.txt");
    ss.getline(temp,20);
   
    
    return temp;
}
void Circle::Save()
{
    ofstream save ("polimorfizm_9.txt",ios_base::app|ios_base::trunc);
    save<<"Circle--->>"<<GetZentr()<<" "<<GetRadius()<<endl;
}
int Circle::GetZentr()
{
    return zentr;
}
int Circle::GetRadius()
{
    return radius;
}
