#include <bits/stdc++.h>
using namespace std;

typedef int datatype;

struct sqQueue
{
    datatype *a = NULL;
    int n;
};

void createSQ(sqQueue &sq)
{
    sq.n = 0;
    sq.a = (int *)realloc(sq.a, (sq.n) * sizeof(datatype));
}
void insertSQ(sqQueue &sq, int data)
{
    sq.a = (int *)realloc(sq.a, (sq.n + 1) * sizeof(datatype));
    sq.a[sq.n] = data;
    sq.n++;
}
void deleteSQ(sqQueue &sq, datatype *y)
{
    if (sq.n == 0)
    {
        cout << "空队列" << endl;
    }
    else
    {
        *y = sq.a[0];
        for (int i = 0; i < sq.n - 1; i++)
        {
            sq.a[i] = sq.a[i + 1];
        }
        sq.n--;
        sq.a = (int *)realloc(sq.a, sq.n * sizeof(datatype));
    }
}

int main(void)
{
    int n;
    cout<<"输入队列长度"<<endl;
    cin>>n;
    sqQueue sq;
    createSQ(sq);
    int i, x, y;
    for (i = 1; i <= n; i++)
    {
        cin>>x;
        insertSQ(sq, x);
    }
    for (i = 1; i <= n; i++)
    {
        deleteSQ(sq, &y);
        cout<<y<<endl;
    }
    system("pause");
}