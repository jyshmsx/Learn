#include<bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x, y;
    public:
    Point(int a, int b)
    {
        x = a, y = b;
    }
    Point()
    {
        x = 0, y = 0;
    }
    int getX(void)
    {
        return x;
    }
    int getY(void)
    {
        return y;
    }
    void setP(int X, int Y)
    {
        x += X; y += Y;
    }

};
class Line{
    private:
    int x1, x2, y1, y2;
    public:
    Line(int a,int b,int c,int d)
    {
        x1 = a, y1 = b, x2 = c, y2 = d;
    }
    void getP()
    {
        printf("(%d,%d)--(%d,%d):", x1, y1, x2, y2);
    }
    double dis()
    {
        return sqrt(abs(x1- x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
    }
    void setL(int a, int b, int c, int d)
    {
        x1 += a; y1 += b; x2 += c; y2 += d;
    }
};


int main()
{
    int n,x1,x2,y1,y2;
    Point A,B(10,10);
    cout<<"PointA:["<<A.getX()<<","<<A.getY()<<"]\n";
    cout<<"PointB:["<<B.getX()<<","<<B.getY()<<"]\n";
    cin>>x1>>y1;
    A.setP(x1,y1); B.setP(x1,y1);
    cout<<"PointA:["<<A.getX()<<","<<A.getY()<<"]\n";
    cout<<"PointB:["<<B.getX()<<","<<B.getY()<<"]\n";

    cin>>x1>>y1>>x2>>y2;
    Line L(x1,y1,x2,y2);
    L.getP();printf("%.2lf\n",L.dis());

    Line L1(0,0,1,1);
    cin>>x1>>y1>>x2>>y2;
    L1.setL(x1,y1,x2,y2);
    L1.getP();printf("%.2lf\n",L1.dis());

    return 0; 
}