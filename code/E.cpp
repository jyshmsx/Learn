#include<bits/stdc++.h>
using namespace std;

struct st{
    string name;
    string gen;
    int age, sc;
    string ad;
}stu[105];

int main(void)
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>stu[i].name>>stu[i].gen>>stu[i].age>>stu[i].sc>>stu[i].ad;
    }
    int m;
    cin>>m;
    for(int i = 0; i < m; i++)
    {
        string cs;
        cin>>cs;
        if(cs == "gender")
        {
            string xb;
            cin>>xb;
            int add = 0;
            for(int j = 0; j < n; j++)
            {
                if(stu[j].gen == xb)
                    add++;
            }
            cout<<cs<<":"<<xb<<":";
            cout<<add<<endl;
        }
        else if(cs == "age")
        {
            int a;
            cin>>a;
            int add = 0;
            for(int j = 0; j < n; j++)
            {
                if(stu[j].age == a)
                    add++;
            }
            cout<<cs<<":"<<a<<":";
            cout<<add<<endl;
        }
        else if(cs == "score")
        {
            int s;
            cin>>s;
            int add = 0;
            for(int j = 0; j < n; j++)
            {
                if(stu[j].sc == s)
                    add++;
            }
            cout<<cs<<":"<<s<<":";
            cout<<add<<endl;
        }
        else if(cs == "addr")
        {
            string a;
            cin>>a;
            int add = 0;
            for(int j = 0; j < n; j++)
            {
                if(stu[j].ad == a)
                    add++;
            }
            cout<<cs<<":"<<a<<":";
            cout<<add<<endl;
        }
    }

    // system("pause");
}