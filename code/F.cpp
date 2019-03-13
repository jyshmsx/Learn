#include<bits/stdc++.h>
using namespace std;

class cyl{
    double pai = 3.14;
    int h, r;
    double s;
    double v;

    public:
    void set(int a, int b)
    {
        r = a, h = b;
        s = 2 * pai * r * r + 2 * pai * r * h;
        v = pai * r * r * h;
    }
    void sho()
    {
        cout<<s<<endl;
        cout<<v<<endl;
    }
}cc;
int main(void)
{
    int a, b;
    while(cin>>a>>b)
    {
        cc.set(a, b);
        cc.sho();
    }
}