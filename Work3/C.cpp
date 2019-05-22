#include <bits/stdc++.h>
using namespace std;

class QQ
{
protected:
    string Name; //角色名字
    int ATK;     //角色攻击力
    int DEF;     //角色防御力
    int MAG;     //角色法术
public:
    friend istream& operator>>(istream& D,QQ& obj)
    {
        D >> obj.Name >> obj.ATK >> obj.DEF >> obj.MAG;
        return D;
    }
    friend ostream& operator<<(ostream &D, const QQ &obj)
    {
        D << obj.Name;
        return D;
    }
    bool operator>=(const QQ &obj)
    {
        return this->ATK*0.5+this->DEF*0.35+this->MAG*0.15 >= obj.ATK*0.5+obj.DEF*0.35+obj.MAG*0.15;
    }
};

int main()
{
    QQ a1, a2;
    cin >> a1;
    cin >> a2;
    if (a1 >= a2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
    // system("pause");
    return 0;
}