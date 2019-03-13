#include<bits/stdc++.h>
using namespace std;

class jx{
    int l, w, s, h, v;
    public:
    jx()
    {
        int l, w, h, s, v;
    }
    void set(int a, int b, int c)
    {
        l = a, w = b, h = c;
        s = 2 * (l * w + l * h + w * h);
        v = l * w * h;
    }
    int gets()
    {
        return s;
    }
    void sho()
    {
        cout<<l<<":"<<w<<":"<<h<<" "<<s<<" "<<v<<endl;
    }
};

bool cmp(jx a, jx b)
{
    return a.gets() < b.gets();
}

int main(void)
{
    int n;
    while(cin>>n)
    {
        jx *p = new jx[n];
        for(int i = 0; i < n; i++)
        {
            int a, b, c;
            cin>>a>>b>>c;
            p[i].set(a, b, c);
        }
        sort(p, p + n, cmp);

        for(int i = 0; i < n; i++)
        {
            p[i].sho();
        }
        delete [] p;
    }

}