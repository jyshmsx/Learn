#include<bits/stdc++.h>
using namespace std;

int r[6], e[6];
int t;

int main(void)
{
    cin>>t;
    while(t--)
    {
        for(int i = 0;i < 5; i++)
        {
            cin>>r[i];
        }
        int mi;
        cin>>mi;
        bool flag = 1;
        for(int i = 0, j = 0 ;i < 5; i++)
        {
            if(r[i] != mi)
            {
                e[j] = r[i];
                j++;
            }
            else
            {
                if(flag)
                    flag = 0;
                else
                {
                    e[j] = r[i];
                    j++;
                }
            }
        }
        if(flag)
            cout<<"not found!"<<endl;
        else
        {
            cout<<e[0];
            for(int i = 1; i < 4; i++)
                cout<<" "<<e[i];
            cout<<endl;
        }
        
    }
}