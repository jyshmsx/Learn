#include <bits/stdc++.h>
using namespace std;
#define max 65535
void prim(int **matrix, int v0, int n)
{
    int i, j, k, min, lowcost[n], closet[n];
    int minPrice = 0;

    for (i = 0; i <= n - 1; i++)
    {
        if (i != v0)
        {
            lowcost[i] = matrix[v0][i];
            closet[i] = v0;
        }
        else
            lowcost[i] = 0;
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (min = max, j = 0; j <= n - 1; j++)
            if (min > lowcost[j] && lowcost[j] != 0)
            {
                min = lowcost[j];
                k = j;
            }

        // cout << k << "->" << closet[k] << ":" << min << endl;
        minPrice += min;
        lowcost[k] = 0;
        for (j = 0; j <= n - 1; j++)
            if (matrix[k][j] < lowcost[j] && lowcost[j] != 0)
            {
                lowcost[j] = matrix[k][j];
                closet[j] = k;
            }
    }

    cout << "最小造价值为: " << minPrice << endl;
}
int main(void)
{
    int n;
    cout << "请输入城市个数" << endl;
    cin >> n;
    cout << "输入" << n << "个城市彼此间的距离，如果距离未知或不考虑则输入-1" << endl;
    int **matrix;
    matrix = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if (a != -1)
            {
                matrix[i][j] = a;
            }
            else
            {
                matrix[i][j] = max;
            }
        }
    }

    prim(matrix, n - 1, n);
    system("pause");
}