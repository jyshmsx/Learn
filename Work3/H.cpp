#include<bits/stdc++.h>
using namespace std;

class ZInfo
{
private:
    int Zcount; //瓷砖数量
    int Zprice; //瓷砖单价
public:
    
};
class WProject
{
private:
    int FLcost;  //辅料总价
    ZInfo z;     //瓷砖信息
    int PTprice; //铺贴单价
public:
    
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
    return 0;
}