#include<bits/stdc++.h>
using namespace std;

class Box{
    int l, w, h;
    int s, v;
    int p1, p2;
    int p;
    public:
    Box(int L, int W, int H)
    {
        l = L, w = W, h = H;
        s = 2 * (l * w + l * h + w * h);
        v = l * w * h;
    }
    Box()
    {
        l = 0, w = 0, h = 0;
        s = 2 * (l * w + l * h + w * h);
        v = l * w * h;
    }
    void setBox(int L,int W,int H)
    {
        l = L, w = W, h = H;
        s = 2 * (l * w + l * h + w * h);
        v = l * w * h;
    }
    void setPrice(int p3,int p4)
    {
        p1 = p3, p2 = p4;
        p = p1 * s + p2 * v;
    }
    int getArea()
    {
        return s;
    }
    int getVol (void)
    {
        return v;
    }
    int getPrice()
    {
        return p;
    }
};
int main(){
    Box box;
    int l,w,h,p1,p2;
    cin>>l>>w>>h;
    box.setBox(l,w,h);
    cin>>l>>w>>h;
    Box box1(l,w,h);
    cin>>p1>>p2;
    box.setPrice(p1,p2);
    box1.setPrice(p1,p2);

    cout<<"BoxA's Area="<<box.getArea()<<",Volume="<<box.getVol()<<",Cost="<<box.getPrice()<<"!"<<endl;
    cout<<"BoxB's Area="<<box1.getArea()<<",Volume="<<box1.getVol()<<",Cost="<<box1.getPrice()<<"!"<<endl;
    if(box.getPrice()>box1.getPrice())
        cout<<"BoxA is expensive!"<<endl;
    else if(box.getPrice()<box1.getPrice())
        cout<<"BoxB is expensive!"<<endl;
    else
        cout<<"Two boxs' costs are the same!"<<endl;

    // system("pause");
} 