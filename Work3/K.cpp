#include<bits/stdc++.h>
using namespace std;

class Point{
private:
    double x,y;
public:
    void setPoint(double xx,double yy)
    {
        x = xx, y = yy;
    }
    double getLen(Point &p1){
        return  sqrt(pow(this->x - p1.x, 2) + pow(this->y - p1.y, 2));
    }
    void show()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
class Circle : public Point
{
    protected:
    Point p1, p2, p3;
    public:
    void setCircle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3)
    {
        setPoint(x,y);
        p1.setPoint(x1, y1);
        p2.setPoint(x2,y2);
        p3.setPoint(x3, y3);
    }
    void show()
    {
        if(getLen(p1) == getLen(p2) && getLen(p1) == getLen(p3))
        {
            cout<<getLen(p1)<<endl;
            Point::show();
        }
        else
        {
            cout<<"This is not a Circle!"<<endl;
        }
    }
};

int main(){
    double x,y,x1,y1,x2,y2,x3,y3;
    Circle c;
    cin>>x>>y>>x1>>y1>>x2>>y2>>x3>>y3;
    c.setCircle(x,y,x1,y1,x2,y2,x3,y3);
    c.show();
    // system("pause");
}