#include<bits/stdc++.h>
using namespace std;



class stu{
    string na;
    int xh;
    int h1, m1, s1, h2, m2, s2;
    int mm;
    public:
    void set(string n, int x)
    {
        na = n, xh   = x;
    }
    void sett(int a,int b,int c,int d,int e,int f)
    {
        h1 = a, m1 = b, s1 = c, h2 = d, m2 = e, s2 = f;

        int mc = m2 - m1;
        int hc = h2 - h1;

        mm = hc * 60 + mc;
    }
    void show()
    {
        cout<<na<<" "<<xh<<" "<<mm<<endl;
    }
}st;

int main(void)
{
    string n;
    int xh, h1, m1, s1, h2, m2, s2;
    while(cin>>n>>xh>>h1>>m1>>s1>>h2>>m2>>s2)
    {
        st.set(n, xh);
        st.sett(h1, m1, s1, h2, m2, s2);
        st.show();
    }
}
