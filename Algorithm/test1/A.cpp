#include<bits/stdc++.h>
using namespace std;

void nixu(char *a)
{
    int i;
    for(i = 0; a[i] != NULL ; i++)
    {

    }
    i--;
    for(; i >= 0; i--)
    {
        cout<<a[i];
    }
    cout<<endl;
}


int main(void)
{
    char a[101];
    while(cin>>a)
    {
        nixu(a);
    }
    
    // system("pause");
}