#include<bits/stdc++.h>
using namespace std;

class INT{
protected:
int Addr, Val, Pe;
public:

int getP() { return Pe; }
void setINT(int a, int v, int p)
{
    Addr = a;
    Val = v;
    Pe = p;
}
friend ostream &operator<<(ostream &D,const INT &obj)
{
    D <<obj.Addr<<":"<<obj.Pe;
    return D;
}
friend istream &operator>>(istream &D,INT &obj )
{
    D >> obj.Addr >> obj.Pe >> obj.Val;
    return D;
}
INT operator++()
{
    this->Addr += sizeof(int);
    this->Pe += this->Val;
}

};
int main()
{
    int n, m;
    INT a;
    cin >> n; //输入等差数列项数
    cin >> a; //输入等差数列第一项a1的存储地址、数值，及公差
    cout << a << endl;
    for (m = 1; m < n; m++)
    {
        ++a; //计算等差数列下一项的存储地址与数值
        cout << a << endl;
    }
    // system("pause");
    return 0;
}