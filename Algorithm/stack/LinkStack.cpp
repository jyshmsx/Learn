#include <bits/stdc++.h>
using namespace std;

typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
} lkstack;
void pushlkstack(lkstack *&top, datatype x)
{
    lkstack *p;
    p = (lkstack *)malloc(sizeof(lkstack));
    p->data = x;
    p->next = top;
    top = p;
}
void poplkstack(lkstack *&top, datatype *y)
{
    lkstack *p;
    if (top == 0)
        printf("Stack Empty");
    else
    {
        p = top;
        *y = p->data;
        top = p->next;
        free(p);
    }
}
int main(void)
{
    int n;
    cout<<"输入栈长度"<<endl;
    cin>>n;
    int i, x, y;
    lkstack *head = 0;
    cout<<"输入数据"<<endl;
    for (i = 1; i <= n; i++)
    {
        cin>>x;
        pushlkstack(head, x);
    }
    for (i = 1; i <= n; i++)
    {
        poplkstack(head, &y);
        cout<<y<<endl;
    }
    system("pause");
}