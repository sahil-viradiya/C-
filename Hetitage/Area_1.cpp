#include <iostream>

using namespace std;

class Shape
{
public:
    float height;
    float width;
};

class Triangle : public Shape
{
public:
    Triangle()
    {
    }
    Triangle(float height, float width)
    {
        this->height = height;
        this->width = width;
    }
};

class Ranctangle : public Shape
{
public:
    Ranctangle()
    {
    }
    Ranctangle(float height, float width)
    {
        this->height = height;
        this->width = width;
    }
};

class Area : public Triangle, public Ranctangle
{
public:
    float gettriangle()
    {
        return (Triangle::height * Triangle::width / 2);
    }

    float getranctengle()
    {
        return (Ranctangle::height * Ranctangle::width);
    }
};

int main()
{
    Area a;
    a.Triangle::height = 2.5;
    a.Triangle::width = 2.5;

    a.Ranctangle::height = 5.5;
    a.Ranctangle::width = 3.7;

    cout << "Area of Ract..." << a.getranctengle();
}