#include<bits/stdc++.h>
using namespace std;

int r[20000];
int t, n;
int main(void)
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>r[i];
        }
        for(int i = 0;i < n; i++)
        {
            int l = i, m = r[i];
            for(int j = i; j < n; j++)
            {
                if(r[j] > m)
                {
                    l = j;
                    m = r[j];
                }
            }
            int mi = r[i];
            r[i] = r[l];
            r[l] = mi;
        }
        for(int i = 0; i < n;i++)
        {
            cout<<r[i]<<':';
        }
        cout<<endl;
    }
    // system("pause");
}