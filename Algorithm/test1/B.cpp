#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    while (n--)
    {
        int l;
        cin>>l;
        int jz[l][l];
        for(int i = 0; i < l ;i++)
        {
            for(int j = 0; j < l; j++)
            {
                cin>>jz[i][j];
            }
        }
        for(int j = 0; j < l ; j++)
        {
            for(int i = 0; i < l ; i++)
            {
                if(i == 0)
                {    
                    cout<<jz[i][j];
                }
                else
                {
                    cout<<" "<<jz[i][j];
                }
            }
            cout<<endl;
        }
    }
    
}