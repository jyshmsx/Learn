#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include<string>
using namespace std;
class College
{
protected:
    int places;
    string Collegename;

public:
    int getP() { return places; }
    string getCN() { return Collegename; }
    void setP(int p) { places = p; }
    void setCN(string n) { Collegename = n; }
};
class Athlete: public College{
    protected:
    int rank;
    string AthleteName;
    public:
    void setALL(int pl, int rk, string cN, string N) 
    {
        rank = rk;
        AthleteName = N;
        setP(pl);
        setCN(cN);
    }
    string getN()
    {
        return AthleteName;
    }
    int getTotal()
    {
        return (places <= 9? (9-places)*4 : 0) + (rank <= 9 ? (9 - rank)*2: 0) + 5;
    }
};
int main()
{
    Athlete a;
    int p, r;
    string cn, n;
    cin >> p >> r >> cn >> n;
    a.setALL(p, r, cn, n);
    cout << a.getCN() << " " << a.getN() << " " << a.getTotal() << endl;
    // system("pause");
    return 0;
}
