#include<bits/stdc++.h>
using namespace std;

class jx{
    int l, w, s;
    public:
    jx()
    {
        int l, w, s;
    }
    void set(int a, int b)
    {
        l = a, w = b;
        s = a * b;
    }
    int gets()
    {
        return s;
    }
    void sho()
    {
        cout<<l<<","<<w<<" "<<s<<endl;
    }
};

bool cmp(jx a, jx b)
{
    return a.gets() > b.gets();
}

int main(void)
{
    int n;
    while(cin>>n)
    {
        jx *p = new jx[n];
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin>>a>>b;
            p[i].set(a, b);
        }
        sort(p, p + n, cmp);

        for(int i = 0; i < n; i++)
        {
            p[i].sho();
        }
    }

}