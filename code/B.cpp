#include<bits/stdc++.h>
using namespace std;

char r[10005];

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<strlen(r)<<endl;
        for(int i = strlen(r) - 1; i >= 0; i--)
        {
            cout<<r[i];
        }
        cout<<endl;
    }
}