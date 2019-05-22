#include<bits/stdc++.h>
using namespace std;

class Cone{
private:
    double radius;
    double height;
public:
    Cone(double r,double h):radius(r),height(h)
    {
        ;
    }
    double getVol()
    {
        return 3.14  * pow(radius,2) * height / 3;
    }
    double getr()
    {
        return radius;
    }
    double geth()
    {
        return height;
    }
};
class Product : public Cone
{
    protected:
    double price, High;
    public:
    Product(double r, double h1, double h2, double p):Cone(r, h1), High(h2),price(p)
    {
        ;
    }
    double getVol()
    {
        double b=High / geth();
        return (1-(b*b*b))*Cone::getVol();
    }
    double getPrice()
    {
        return getVol() * price; 
    }
};
int main(){
    double r,h1,h2,p;
    cin>>r>>h1>>h2>>p;
    Product pro(r,h1,h2,p);
    cout<<"Volume:"<<pro.getVol()<<endl;
    cout<<"Price:"<<pro.getPrice()<<endl;
    // system("pause");
}