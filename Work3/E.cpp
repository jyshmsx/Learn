#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <cstdio>
using namespace std;
class Mate
{
protected:
    double weight;
    string name;

public:
    double getW() { return weight; }
    string getN() { return name; }
    void setW(double w) { weight = w; }
    void setN(string n) { name = n; }
};
class Ring: public Mate{
    protected:
    int price;
    string brand;
    public:
    void setALL(double w, string n, int p, string b)
    {
        setW(w);
        setN(n);
        price = p;
        brand = b;
    }
    string getB()
    {
        return brand;
    }
    double getTotal()
    {
        return weight*price+100;
    }
};
int main()
{
    Ring r;
    double w;
    int p;
    string n, b;
    cin >> w >> n >> p >> b;
    r.setALL(w, n, p, b);
    cout << r.getB() << " " << r.getN();
    printf(" %.2lf\n", r.getTotal());
    // system("pause");
    return 0;
}