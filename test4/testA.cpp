#include<iostream>
using namespace std;

class Cuboid{
private:
    double a,b,c;
public:
    Cuboid(double a1,double b1,double c1);
    double getCirc();    //求边长
    double getArea();   //求表面积
    double getVol();   //求体积
    void show();   //格式化输出长方体的长宽高信息
};
double Cuboid::getCirc()
{
    return 4 * (a + b + c);
} 
double Cuboid::getArea()
{
    return 2 * (a * b + a * c + b * c);
}
double Cuboid::getVol()
{
    return a * b * c;
}
void Cuboid::show()
{
    cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
}
Cuboid::Cuboid(double a1, double b1, double c1):a(a1),b(b1),c(c1)
{
    ;
}
class Product : public Cuboid{
    protected:
    double P1, P2, P3;
    public:
    Product(double A, double B, double C, double p1, double p2, double p3):P1(p1),P2(p2),P3(p3),Cuboid(A,B,C)
    {
        ;
    }
    void show()
    {
        Cuboid::show();
        cout<<P1*getCirc()+P2*getArea()+P3*getVol()<<endl;
    }
};

int main(){
    int n;
    double a,b,c,p1,p2,p3;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>p1>>p2>>p3;
        Product p(a,b,c,p1,p2,p3);
        p.show();
    }
}