#include<bits/stdc++.h>
using namespace std;

class Circle
{
    protected:
    double r, c, s;
    const double pi = 3.14;
    public:
    Circle(double R = 10):r(R)
    {
        c = 2 * pi * r;
        s = pi * r * r;
    }
    double getCirc()
    {
        return c;
    }
    double getArea()
    {
        return s;
    }
};



int main(){
    int r;
    cin>>r;
    Circle c1(r),c2;
    cout<<c1.getCirc()<<" "<<c1.getArea()<<endl;
    cout<<c2.getCirc()<<" "<<c2.getArea()<<endl;
    // system("pause");
}