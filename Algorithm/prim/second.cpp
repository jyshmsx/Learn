#include<bits/stdc++.h>
using namespace std;

//通过邻接矩阵创建图，并打印弧
int main(void)
{
    int n, l;
    cin>>n;
    int map[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>map[i][j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(map[i][j] != 0)
            {
                cout<<i + 1<<"->"<<j + 1<<": "<<map[i][j]<<endl;
            }
        }
    }

    system("pause");
    return 0;
}

