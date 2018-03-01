#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
public:
    virtual void Show()=0;
    virtual void Load()=0;
    virtual void Save()=0;
    
};
class Square:public Shape
{
    int leftAngle;
    int length;
public:
    Square(){}
    Square(int _leftAngle, int _length):leftAngle(_leftAngle),length(_length){}
    ~Square(){}
    void Show(){cout<<"Square---> "<<GetLength()<<"   "<<GetLeftAngle();}
    void Load()
    {
        FILE *f;
        string a;
        f = fopen("polimorfizm_9.txt","r");
        ifstream fin ("polimorfizm_9.txt");
        fin >> a;
        fclose(f);
        cout << endl << a << endl;
    }
    void Save()
    {
        FILE *f;
        f = fopen("polimorfizm_9.txt","w");
        ofstream fout ("polimorfizm_9.txt");
        fout <<"Square--->"<<GetLength()<<"/"<<GetLeftAngle();
        fclose(f);
    }
    int GetLength()
    {
        return length;
    }
    int GetLeftAngle()
    {
        return leftAngle;
    }
};
class Rectangle:public Shape
{
    int topAngle;
    int size;
public:
    Rectangle(){}
    Rectangle(int _topAngle,int _size):topAngle(_topAngle),size(_size){}
    void Show(){cout<<"Rectangle--->"<<GetTop()<<"/"<<GetSize();}
    void Load()
    {
        FILE *f;
        string a;
        f = fopen("polimorfizm_9.txt","r");
        ifstream fin ("polimorfizm_9.txt");
        fin >> a;
        fclose(f);
        cout << endl << a << endl;
    }
    void Save()
    {
        FILE *f;
        f = fopen("polimorfizm_9.txt","w");
        ofstream fout ("polimorfizm_9.txt");
        fout <<"Rectangle--->"<<GetTop()<<"/"<<GetSize();
        fclose(f);
    }
    int GetTop()
    {
        return topAngle;
    }
    int GetSize()
    {
        return size;
    }
};
class Circle:public Shape
{
    int zentr;
    int radius;
public:
    Circle(){}
    Circle(int _zentr,int _radius):zentr(_zentr),radius(_radius){}
    void Show(){cout<<"Circle--->"<<GetZentr()<<"/"<<GetRadius();}
    void Load()
    {
        FILE *f;
        string a;
        f = fopen("polimorfizm_9.txt","r");
        ifstream fin ("polimorfizm_9.txt");
        fin >> a;
        fclose(f);
        cout << endl << a << endl;
    }
    void Save()
    {
        FILE *f;
        f = fopen("polimorfizm_9.txt","w");
        ofstream fout ("polimorfizm_9.txt");
        fout <<"Circle--->"<<GetZentr()<<"/"<<GetRadius();
        fclose(f);
    }
    int GetZentr()
    {
        return zentr;
    }
    int GetRadius()
    {
        return radius;
    }
};

class Ellipse:public Shape
{
    int topAngle;
public:
    Ellipse(){}
    Ellipse(int _topAngle):topAngle(_topAngle){}
    void Show(){cout<<"Ellipse--->"<<GetTopAngle();}
    void Load()
    {
        FILE *f;
        string a;
        f = fopen("polimorfizm_9.txt","r");
        ifstream fin ("polimorfizm_9.txt");
        fin >> a;
        fclose(f);
        cout << endl << a << endl;

    }
    void Save()
    {
        FILE *f;
        f = fopen("polimorfizm_9.txt","w");
        ofstream fout ("polimorfizm_9.txt");
        fout <<"Ellipse--->"<<GetTopAngle();
        fclose(f);

    }
    int GetTopAngle()
    {return topAngle;}
};

int main() {
    setlocale(LC_ALL, "rus");
    Shape* mas[4];
    mas[0]=new Square(10,33);
    mas[1]=new Rectangle(10,5);
    mas[2]=new Circle(9,50);
    mas[3]=new Ellipse(100);
    mas[3]->Save();
    cout<<endl;
    mas[3]->Load();
    cout<<endl;
    mas[2]->Save();
    mas[3]->Load();
    
    //Не могу выгрузить добавить информцию в файл/
    //Отправить в другой массив.
}
