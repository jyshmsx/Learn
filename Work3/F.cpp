#include<bits/stdc++.h>
using namespace std;

class Athlete
{
protected:
    string name;
    string item;

public:
    Athlete(string n, string i) : name(n), item(i) {}
    Athlete() {}
    string getN() { return name; }
    string getI() { return item; }
    void set(string n, string i)
    {
        name = n;
        item = i;
    }
};
class Boxer: public Athlete{
    protected:
    int points;
    int champs;
    public:
    void set(string n, string i, int p, int c)
    {
        name = n;
        item = i;
        points = p * 3;
        champs = c;
    }
    Boxer(string n, string i, int p, int c):Athlete(n, i), points(p * 3),champs(c)
    {
        ;
    }
    Boxer()
    {
        ;
    }
    int getP()
    {
        return points;
    }
    int getC()
    {
        return champs;
    }

};
int main()
{
    Boxer t1;
    int p, c;
    string n, i;
    cin >> n >> i >> p >> c;
    t1.set(n, i, p, c);
    cin >> n >> i >> p >> c;
    Boxer t2(n, i, p, c);
    if (t1.getP() > t2.getP())
    {
        cout << t1.getN() << " " << t1.getP() << " " << t1.getC() << endl;
    }
    else
    {
        cout << t2.getN() << " " << t2.getP() << " " << t2.getC() << endl;
    }

    // system("pause");
    return 0;
}