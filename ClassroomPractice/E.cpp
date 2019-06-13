#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
    string name;
    bool si;
    int time;
    static int Nfinish;
    public:
    student(string n = "",bool s = 0,int t = 1200):name(n),si(s),time(t){}
    student(const student &obj)
    {
        name = obj.name;
        si = obj.si;
        time = obj.time;
    }
    void setS(string n = "",bool s = 0,int t = 1200)
    {
        name = n;
        time = t;
        si = s;
        if(si == 0 || time > 1200)
        {
            si = 0;
            Nfinish++;
        }
    }
    string getN()
    {
        return name;
    }
    bool getS()
    {
        return si;
    }
    int getT()
    {
        return time;
    }
    void show()
    {
        cout<<name<<" "<<"A"<<" "<<time<<endl;
    }
    void showNF()
    {
        cout<<"Not finished:"<<Nfinish<<endl;
    }
};
bool cmp(student a, student b)
{
    if(a.getS() == b.getS())
    {
        return a.getT() < b.getT();
    }
    else{
        return a.getS() > b.getS();
    }
}
int student::Nfinish = 0;
int main(void)
{
    string name;
    int time;
    bool s;
    int n;
    cin>>n;
    student *p = new student [n];
    for(int i = 0; i < n; i++)
    {
        string AW;
        cin>>name>>AW>>time;
        if(AW == "A")
            s = 1;
        else
        {
            s = 0;
        }
        p[i].setS(name, s, time);
    }
    sort(p, p + n, cmp);
    for(int i = 0; p[i].getS() != 0; i++)
    {
        p[i].show();
    }
    p[n - 1].showNF();

    delete [] p;
    // system("pause");
    return 0;
}