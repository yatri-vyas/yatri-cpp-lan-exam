#include <iostream>

using namespace std;

class Shape
{
public:
    string color;
    float area;

    void display()
    {
        cout << "Area = " << area << endl;
    }
};

class Circle : public Shape
{
public:
    Circle(int r)
    {
        area = 3.14 * r * r;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int l, int w)
    {
        area = l * w;
    }
};

int main()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);
    c.display();

    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Rectangle rec(l, w);
    rec.display();

    return 0;
}
