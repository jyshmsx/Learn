#include<bits/stdc++.h>
using namespace std;

class sj{
    private:
    int a, b, c;
    bool f;
    int C;
    public:
    void set(int j,int k, int l)
    {
        a = j, b = k, c = l;
        if(a + b > c && a + c > b && b + c > a)
        {
            f = 1;
            C = a + b + c;
        }
        else
        {
            f = 0;
            C = 0;
        }
    }
    void sho()
    {
        if(f)
            cout<<C<<endl;
        else
            cout<<"error"<<endl;
    }
}sj;
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        sj.set(a, b, c);
        sj.sho();
    }
}