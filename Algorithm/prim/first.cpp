#include<bits/stdc++.h>
using namespace std;

//��������ͼ�Ļ���������ͼ����ӡ����ͼ�Ļ�
int main(void)
{
    int n, l;
    cin>>n>>l;
    int map[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            map[i][j] = 0;
        }
    }

    for(int i = 0; i < l ; i++)
    {
        int a, b, l;
        cin>>a>>b;
        a--, b--;
        cin>>map[a][b];
        map[b][a] = map[a][b];
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(map[i][j] != 0)
            {
                cout<<i + 1<<"-"<<j + 1<<": "<<map[i][j]<<endl;
            }
        }
    }

    system("pause");
    return 0;
}

