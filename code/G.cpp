#include<bits/stdc++.h>
using namespace std;

class cf{
    private:
    int l, w, h, s, v;

    public:
    void set(int a, int b, int c)
    {
        l = a, w = b, h = c;
        s = 2 * (l * w + l * h + w * h);
        v  = w * l * h;
    }
    void sho()
    {
        cout<<s<<endl<<v<<endl;
    }
}cf;
int main(void)
{
    int a, b, c;
    while(cin>>a>>b>>c)
    {
        cf.set(a, b, c);
        cf.sho();
    }
}