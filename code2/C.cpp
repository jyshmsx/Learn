#include<bits/stdc++.h>
using namespace std;
class shoot{
    protected:
    double dist;
    double X, Y;
    public:
    shoot()
    {
        ;
    }
    void set(int x = 0, int y = 0)
    {
        X = x , Y = y;
        dist = X * X + Y * Y;
    }
    double gets()
    {
        return dist;
    }
    void sho()
    {
        cout<<setiosflags(ios::fixed)<<setprecision(0)<<X<<" "<<Y<<" ";
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<sqrt(dist)<<endl;
    }
};

bool cmp(shoot a, shoot b)
{
    return  a.gets() < b.gets();
}

int main(void)
{
    int n;
    cin>>n;
    shoot *p = new shoot [n];
    for(int i = 0; i < n; i++)
    {
        int x , y;
        cin>>x>>y;
        p[i].set(x, y);
    }
    sort(p, p + n, cmp);

    for(int i = 0; i < n; i++)
    {
        p[i].sho();
    }

    delete [] p;
    // system("pause");
}