#include<bits/stdc++.h>
using namespace std;
typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
} lkqueue;
void insertlkqueue(lkqueue *&front, lkqueue *&rear, datatype x)
{
    lkqueue *p;
    p = (lkqueue *)malloc(sizeof(lkqueue));
    p->data = x;
    p->next = 0;
    if (rear == 0)
        front = rear = p;
    else
    {
        rear->next = p;
        rear = p;
    }
}
void deletelkqueue(lkqueue *&front, lkqueue *&rear, datatype *y)
{
    lkqueue *p;
    if (front == 0)
        printf("The linked queue is empty");
    else
    {
        p = front;
        front = front->next;
        *y = p->data;
        free(p);
        if (front == 0)
            rear = front;
    }
}
int main(void)
{
    int n;
    cout<<"输入队列长度"<<endl;
    cin>>n;
    int i, x, y;
    lkqueue *front = 0, *rear = 0;
    for (i = 1; i <= n; i++)
    {
        cin>>x;
        insertlkqueue(front, rear, x);
    }
    for (i = 1; i <= n; i++)
    {
        deletelkqueue(front, rear, &y);
        cout<<y<<endl;
    }
    system("pause");
}