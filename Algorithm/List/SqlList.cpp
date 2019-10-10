#include <bits/stdc++.h>
using namespace std;

typedef int datatype;
struct SqlList
{
    int n;
    datatype *a = NULL;
};
void createSL(SqlList &sl, int n)
{
    if (sl.a = (int *)realloc(sl.a ,n * sizeof(int) ) )
    {
        sl.n = n;
        for (int i = 0; i < n; i++)
        {
            cin >> sl.a[i];
        }
    }
    else
    {
        cout << "分配内存错误" << endl;
    }
}
void insertSL(SqlList &sl, int w, datatype n)
{
    if (w >= 0 && w <= sl.n)
    {
        sl.n++;
        if (realloc(sl.a, sl.n * sizeof(int)))
        {
            int ls;
            for (int i = w - 1; i < sl.n; i++)
            {
                if (i == w - 1)
                {
                    ls = sl.a[i];
                    sl.a[i] = n;
                }
                else
                {
                    int lls = sl.a[i];
                    sl.a[i] = ls;
                    ls = lls;
                }
            }
        }
        else
        {
            cout << "分配内存错误" << endl;
        }
    }
    else
    {
        cout << "插入位置错误" << endl;
    }
}
void deleteSL(SqlList &sl, int w, datatype *y)
{
    if (w <= sl.n && w >= 0)
    {
        *y = sl.a[w - 1];
        for (int i = w - 1; i < sl.n - 1; i++)
        {
            sl.a[i] = sl.a[i + 1];
        }
        sl.n--;
        if (realloc(sl.a, sl.n * sizeof(int)))
        {
        }
        else
        {
            cout << "分配内存错误" << endl;
        }
    }
    else
    {
        cout << "删除位置错误" << endl;
    }
}
void printSL(SqlList &sl)
{
    for(int i = 0; i < sl.n; i++)
    {
        cout<<sl.a[i]<<" ";
    }
    cout<<endl;
}
int main(void)
{
    SqlList Sl;
    cout<<"输入创建顺序链长度，并输入数据"<<endl;
    int a;
    cin>>a;
    createSL(Sl, a);
    printSL(Sl);
    cout<<"size: "<<_msize(Sl.a)<<endl;
    cout<<"输入插入位置，插入数据"<<endl;
    int b;
    cin>>a>>b;
    insertSL(Sl, a, b);
    printSL(Sl);
    cout<<"size: "<<_msize(Sl.a)<<endl;
    int y = 0;
    cout<<"输入删除元素位置"<<endl;
    cin>>a;
    deleteSL(Sl, a, &y);
    printSL(Sl);
    cout<<"size: "<<_msize(Sl.a)<<endl;
    cout << "删去元素为 "<< y << endl;
    system("pause");
}

// #include <bits/stdc++.h>
// #define m 1000

// typedef int datatype;
// typedef struct
// {
//     datatype a[m];
//     int n;
// } sqlist;
// void insertsqlist(sqlist &list, int i, datatype x)
// {
//     int j;
//     if (list.n + 1 > m)
//         printf("The list is overflow!");
//     else if (i < 1 || i > list.n + 1)
//         printf("The insert position is not right!");
//     else
//     {
//         for (j = list.n - 1; j >= i - 1; j--)
//             list.a[j + 1] = list.a[j];
//         /* 以上循环语句的功能是将从第i个位置开始的元素均向后移动一个位置 */
//         list.a[i - 1] = x;
//         list.n = list.n + 1;
//     }
// }
// void deletesqlist(sqlist &list, int i, datatype *y)
// {
//     int j;
//     if (i < 1 || i > list.n)
//         printf("The delete position is not right!");
//     else
//     {
//         *y = list.a[i - 1];
//         list.n = list.n - 1;
//         for (j = i; j <= list.n - 1; j++)
//             list.a[j - 1] = list.a[j];
//     }
// }
// main()
// {
//     datatype i, y;
//     sqlist list = {{1, 2, 3, 4}, 4}; /* 初始化线性表list中有4个元素 */
//     for (i = 0; i < list.n; i++)
//         printf("%d\t", list.a[i]);
//     printf("\n");
//     insertsqlist(list, 2, 10);
//     for (i = 0; i < list.n; i++)
//         printf("%d\t", list.a[i]);
//     printf("\n");
//     deletesqlist(list, 4, &y);
//     for (i = 0; i < list.n; i++)
//         printf("%d\t", list.a[i]);
//     printf("\n");
//     printf("The delete data is %d\n", y);
//     system("pause");
// }