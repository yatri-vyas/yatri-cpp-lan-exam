#include <iostream>

using namespace std;

class Shape
{
public:
    float area;

    virtual void displayDetails()
    {
        cout << "This is a generic shape."<<endl;
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int r)
    {
        radius = r;
        area = 3.14 * r * r;
    }

    void displayDetails() override
    {
        cout << "Circle Details:"<<endl;
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area << endl;
    }
};

class Rectangle : public Shape
{
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        area = l * w;
    }

    void displayDetails() override
    {
        cout << "Rectangle Details:";
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(4, 6);

    Shape *shapes[2];

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        cout << "Shape " << i + 1 <<endl;
        shapes[i]->displayDetails();   
    }

    return 0;
}
