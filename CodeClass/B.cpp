#include<bits/stdc++.h>
using namespace std;
class Course{
    protected:
    string cname, bname, au;
    int pri, cre;
    public:

    void setC(string c, int cr, string b, string a, int pr)
    {
        cname = c,cre = cr,bname = b,au = a,pri = pr;
    }

    int getCredit()
    {
        return cre;
    }
    int getPrice()
    {
        return pri;
    }
};


int main(){
    int X;
    cin>>X;
    Course *c=new Course[X];
    for(int i=0;i<X;i++){
        int pri,cre;
        string cname,bname,au;
        cin>>cname>>cre>>bname>>au>>pri;
        c[i].setC(cname,cre,bname,au,pri);
    }

    int totalc(0),totalp(0);
    for(int i=0;i<X;i++){
        totalc=totalc+c[i].getCredit();
        totalp=totalp+c[i].getPrice();
    }
    cout<<totalc<<" "<<totalp<<endl;
    delete []c;
    // system("pause");
}