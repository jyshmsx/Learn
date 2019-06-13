#include<bits/stdc++.h>
using namespace std;

class Triangle{
    protected:
    double a , b, c;
    public:
    Triangle(double A, double B, double C):a(A),b(B),c(C){}
    void show()
    {
        if(a + b < c || a + c < b || b + c < a)
        {
            cout<<"error"<<endl;
        }
        else
        {
            double s = sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
            cout<<s<<endl;
        }
    }
};

int main(void)
{
    int t;
    cin>>t;
    while (t--)
    {
        double a, b, c;
        cin>>a>>b>>c;
        Triangle TA(a, b, c);
        TA.show();
    }
    // system("pause");
    
}