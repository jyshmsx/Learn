#include<bits/stdc++.h>
using namespace std;

class Teacher
{
protected:
    string name;
    int age;
    string title;

public:
    Teacher(string n, int a, string t) : name(n), age(a), title(t) {}
    Teacher() {}
    string getN() { return name; }
    string getT() { return title; }
    int getA() { return age; }
    void set(string n, int a, string t)
    {
        name = n;
        age = a;
        title = t;
    }
};
class Teacher_Cadre:public Teacher{
    protected:
    string post;
    int wages;
    public:
    Teacher_Cadre(string n, int a, string t, string p, int w):Teacher(n, a, t), post(p), wages(w)
    {
        ;
    }
    Teacher_Cadre(){}
    void set(string n, int a, string t, string p, int w)
    {
        name = n;
        age = a;
        title = t;
        wages = w;
        post = p;
    }
    int getW()
    {
        return wages;
    }
    string getP(){
        return post;
    }
};

int main()
{
    Teacher_Cadre t1;
    int a, w;
    string n, t, p;
    cin >> n >> a >> t >> p >> w;
    t1.set(n, a, t, p, w);
    cin >> n >> a >> t >> p >> w;
    Teacher_Cadre t2(n, a, t, p, w);
    if (t1.getW() > t2.getW())
    {
        cout << t1.getN() << " " << t1.getT() << " " << t1.getP() << " " << t1.getW() << endl;
    }
    else if (t1.getW() < t2.getW())
    {
        cout << t2.getN() << " " << t2.getT() << " " << t2.getP() << " " << t2.getW() << endl;
    }
    else
    {
        cout << t1.getN() << " " << t1.getT() << " " << t1.getP() << " " << t1.getW() << endl;
        cout << t2.getN() << " " << t2.getT() << " " << t2.getP() << " " << t2.getW() << endl;
    }


    // system("pause");
    return 0;
}