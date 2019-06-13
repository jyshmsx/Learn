#include<bits/stdc++.h>
using namespace std;
class Track_field
{
protected:
    string name;
    int number;
public:
    Track_field() {}
    Track_field(string n, int c) : name(n), number(c) {}
    string getName() { return name; }
    int getNumber() { return number; }
    void setTrack_field(string n, int c)
    {
        name = n;
        number = c;
    }
    virtual void Rank() = 0;
};
class Athletics_T : public Track_field{
    protected:
    double time;
    public:
    Athletics_T(string n, int c, double t):Track_field(n, c),time(t){}
    void Rank()
    {
        cout<<"Name:"<<getName()<<endl;
        cout<<"Number:"<<getNumber()<<endl;
        cout<<"Time:"<<time<<endl;
    }
};
class Athletics_J : public Track_field{
    protected:
    double distance;
    public:
    Athletics_J(string n, int c, double d):Track_field(n, c), distance(d){}
    void Rank()
    {
        cout<<"Name:"<<getName()<<endl;
        cout<<"Number:"<<getNumber()<<endl;
        cout<<"Distance:"<<distance<<endl;
    }
};
int main()
{
    string n;
    int c;
    double d, t;
    Track_field *pTF;
    cin >> n >> c >> t;
    Athletics_T AT(n, c, t);
    cin >> n >> c >> d;
    Athletics_J AJ(n, c, d);
    pTF = &AT;
    pTF->Rank();
    pTF = &AJ;
    pTF->Rank();

    // system("pause");
    return 0;
}