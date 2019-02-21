#include<bits/stdc++.h>
using namespace std;

struct stu
{
    string name;
    double pj;
}stud[50];

int pw[50];

double js(int n, int *pw)
{
    sort(pw, pw + n);
    double add = 0;
    for(int j = 1; j < n - 1; j++)
        add += pw[j];
    add /= (n -2);
    return add;
}
bool cmp(stu a, stu b)
{
    return a.pj > b.pj;
}
int main(void)
{
    int m, n;
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        cin>>stud[i].name;
        for(int j = 0; j < n; j++)
            cin>>pw[j];
        stud[i].pj = js(n, pw);
    }
    sort(stud, stud + m, cmp);
    for(int i = 0; i < 3; i++)
    {
        cout<<stud[i].name<<" ";
        printf("%.2lf\n", stud[i].pj);
    }

    // system("pause");
}
