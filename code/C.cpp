#include<bits/stdc++.h>
using namespace std;

class mm{
    string na, we;
    double iq, at;

    public:
    void set(string n, string w, int i, int a)
    {
        na = n, we = w, iq = i, at = a;
    }
    double get()
    {
        return iq * 0.4 + at * 0.6;
    }
    string getn()
    {
        return na;
    }
}a, b;

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string na, we;
        int i, w;
        cin>>na>>i>>we>>w;
        a.set(na, we, i, w);
        cin>>na>>i>>we>>w;
        b.set(na, we, i, w);

        if(a.get() > b.get())
        {
            cout<<a.getn()<<" win "<<b.getn()<<endl;
        }
        else if(a.get() == b.get())
        {
            cout<<a.getn()<<" tie "<<b.getn()<<endl;
        }
        else
        {
            cout<<a.getn()<<" lost "<<b.getn()<<endl;
        }
        

    }
}