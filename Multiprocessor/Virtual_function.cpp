#include <iostream>

using namespace std;

class Shape
{
protected:
    float height;
    float width;
    float PI = 3.14;
    float radius;

public:
    virtual float getArea() = 0;
    void setCircle(float radius)
    {

        this->radius = radius;
    }

    void setTriangle(float height, float width)
    {
        this->height = height;
        this->width = width;
    }
    
};

class Circle : public Shape
{
public:
    float getArea()
    {
        return (PI * radius * radius);
    }
};

class Triangle : public Shape
{
public:
    float getArea()
    {
        return (height * width);
    }
};

int main()
{
   
    Circle c;
    Triangle t1;
    c.setCircle(25);
    t1.setTriangle(10,25);

    cout<<"Circle : "<<c.getArea()<<endl;
    cout<<"Triangle : "<<t1.getArea();
}