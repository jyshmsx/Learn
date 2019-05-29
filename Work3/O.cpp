#include<bits/stdc++.h>
using namespace std;
class Circle
{
    protected:
    double radius;
    public:
    Circle(double r) : radius(r)
    {
        ;
    }
    void show()
    {
        cout<<"The Circle's Area is "<<getArea()<<endl;
    }
    double getArea()
    {
        return 3.14 * pow(radius,2);
    }
};
class Rectangle{
    protected:
    double high, width;
    public:
    Rectangle(double h, double w):high(h),width(w)
    {
        ;
    }
    void show()
    {
        cout<<"The Rectangle's Area is "<<getArea()<<endl;
    }
    double getArea()
    {
        return high * width;
    }
};
class Product: public Circle, public Rectangle
{
    public:
    Product(double r, double h, double w):Circle(r),Rectangle(h, w)
    {
        ;
    }
    void show()
    {
        cout<<"The Product's Area is "<<Rectangle::getArea() - Circle::getArea()<<endl;
    }
};

int main()
{
    double r, h, w;
    cin >> r;
    Circle c(r);
    c.show();
    cin >> h >> w;
    Rectangle rect(h, w);
    rect.show();
    cin >> r >> h >> w;
    Product pro(r, h, w);
    pro.show();
    // system("pause");
}