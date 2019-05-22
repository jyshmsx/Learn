#include<bits/stdc++.h>
using namespace std;

class Triangle{
private:
    double a,b,c;
public:
    void setTriangle(double aa,double bb,double cc)
    {
        a = aa, b = bb, c = cc;
    }
    double getCirc(){
        return a + b + c;
    }
    double getArea(){
        return sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    }
};
class TriangularPrism: public Triangle
{
    protected:
    double area, volume, high;
    public:
    void setTP(double aa, double bb, double cc, double h)
    {
        high = h;
        setTriangle(aa, bb, cc);
    }
    double getArea()
    {
        return 2 * Triangle::getArea() + Triangle::getCirc() * high;
    }
    double getVolume()
    {
        return Triangle::getArea() * high;
    }
};
int main(){
    double a,b,c,h;
    cin>>a>>b>>c>>h;
    TriangularPrism tp;
    tp.setTP(a,b,c,h);
    cout<<"area="<<tp.getArea()<<endl;
    cout<<"volume="<<tp.getVolume()<<endl;
    // system("pause");
}