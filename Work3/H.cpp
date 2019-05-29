#include<bits/stdc++.h>
using namespace std;

class ZInfo
{
private:
    int Zcount; //瓷砖数量
    int Zprice; //瓷砖单价
public:
    ZInfo(int c, int p):Zcount(c),Zprice(p)
    {
        ;
    }
    int getc()
    {
        return Zcount;
    }
    int getp()
    {
        return Zprice;
    }
};
class WProject
{
private:
    int FLcost;  //辅料总价
    ZInfo z;     //瓷砖信息
    int PTprice; //铺贴单价
public:
WProject(int fl = 0, int c = 0, int p = 0, int pt = 0):z(c, p), FLcost(fl), PTprice(pt)
{
    ;
}
int getTotal()
{
    return FLcost + (z.getp() + PTprice ) * z.getc();
}
};

int main()
{
    WProject yxp;
    int fl, c, p, pt;
    cin >> fl >> c >> p;
    WProject wsgp(fl, c, p);
    cin >> fl >> c >> p >> pt;
    WProject ywgp(fl, c, p, pt);
    cout << yxp.getTotal() << endl;
    cout << wsgp.getTotal() << endl;
    cout << ywgp.getTotal() << endl;

    // system("pause");
    return 0;
}