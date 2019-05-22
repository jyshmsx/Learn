#include <bits/stdc++.h>
using namespace std;

class Sphere
{
private:
    double radius;

public:
    Sphere();
    Sphere(double r):radius(r)
    {
        ;
    }
    void setSphere(double r){
        radius = r;
    }
    double getArea()
    {
        return 4 * 3.14 * pow(radius, 2);
    }
    double getVol()
    {
        return 4 * 3.14 * pow(radius,3) / 3;
    }
};
class Toy : public Sphere
{
    protected:
    double P1, P2;
    public:
    Toy(double r = 0, double p1 = 0, double p2 = 0):Sphere(r),P1(p1),P2(p2) 
    {
        ;
    }
    void setToy(double r , double p1, double p2)
    {
        setSphere(r);
        P1 = p1;
        P2 = p2;
    }
    double getPrice()
    {
        return P1 * getArea() + P2 * getVol();
    }
    void show()
    {
        cout<<"The toy's price is "<<getPrice()<<endl;
    }
};

int main()
{
    Toy t1;
    double r, p1, p2;

    cin >> r >> p1 >> p2;
    t1.setToy(r, p1, p2);
    cout << "The toy's price is " << t1.getPrice() << endl;

    cin >> r >> p1 >> p2;
    Toy t2(r, p1, p2);
    t2.show();
}
