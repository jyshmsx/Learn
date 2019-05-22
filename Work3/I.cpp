#include<bits/stdc++.h>
using namespace std;




class Weapon
{
private:
    string name; //武器名字
    int power;   //武器攻击力WP
public:
    Weapon(string n, int p ):name(n),power(p)
    {
        ;
    }
    string getName()
    {
        return name;
    }
    int getP()
    {
        return power;
    }
};
class Hero
{
private:
    string name; //英雄名字
    int IQ;      //智商IQ
    int IF;      //内力修炼IF
    Weapon w;    //所持武器
public:
    Hero(string n1 = "UnArmed" , int iq = 0, int iif = 0, string n2 = "UnArmed", int wp = 0):name(n1),IQ(iq),IF(iif),w(n2, wp)
    {
        ;
    }
    int getTotal()
    {
        return IQ + IF + w.getP();
    }
    string getName()
    {
        return name;
    }
    Weapon getWeapon()
    {
        return w;
    }
};

int main()
{
    string n1, n2;
    int iq, iif, wp;
    int t(0);
    cin >> n1 >> iq;
    Hero ZhuGL(n1, iq);
    cin >> n1 >> iq >> iif;
    Hero ZhangSF(n1, iq, iif);
    cin >> n1 >> iq >> iif >> n2 >> wp;
    Hero GuoJ(n1, iq, iif, n2, wp), th( "", 0, 0, "", 0);
    if (ZhuGL.getTotal() > ZhangSF.getTotal())
    {
        t = ZhuGL.getTotal();
        th = ZhuGL;
    }
    else
    {
        t = ZhangSF.getTotal();
        th = ZhangSF;
    }
    if (t < GuoJ.getTotal())
    {
        t = GuoJ.getTotal();
        th = GuoJ;
    }
    cout << th.getName() << " " << th.getTotal() << " " << th.getWeapon().getName() << endl;

    // system("pause");
    return 0;
}