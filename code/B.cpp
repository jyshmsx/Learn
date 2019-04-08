#include<bits/stdc++.h>
using namespace std;
class Date{
protected:
    int Y,M,D;
public:
    Date(int y,int m,int d):Y(y),M(m),D(d){}
    int getY(){return Y;}
    int getM(){return M;}
    int getD(){return D;}
    void setDate(int y,int m,int d){
    Y=y;M=m;D=d;
    }
};
class Device{
    protected:
    Date da;
    string name;
    string brand;
    int price;
    public:
    Device(string n, string br, int pri, Date d):name(n),brand(br),price(pri),da(d.getY(),d.getM(), d.getD())
    {
        ;
    }
    Device(string n, string br, int pri, int y, int m, int d):name(n),brand(br),price(pri),da(y, m, d)
    {
        ;
    }
    int getPrice()
    {
        return price;
    }
    string getName()
    {
        return name;
    }
    string getBrand()
    {
        return brand;
    }
    Date getPD()
    {
        return da;
    }

};
int main(){
    int y,m,d,price,t1,t2;
    double c1,c2;
    string name,brand;
    cin>>y>>m>>d>>name>>brand>>price;
    Date pd(y,m,d);
    Device de1(name,brand,price,pd);
    cin>>y>>m>>d>>name>>brand>>price;
    Device de2(name,brand,price,y,m,d);
    t1=2018-de1.getPD().getY();//设备1的使用时间
    t2=2018-de2.getPD().getY();//设备2的使用时间
    c1=de1.getPrice()*pow(1-0.05,t1);//设备1的现价
    c2=de2.getPrice()*pow(1-0.05,t2);//设备2的现价
    cout<<de1.getName()<<" "<<de1.getBrand()<<" "<<t1<<" "<<c1<<endl;
    cout<<de2.getName()<<" "<<de2.getBrand()<<" "<<t2<<" "<<c2<<endl;
    
    return 0;
}
