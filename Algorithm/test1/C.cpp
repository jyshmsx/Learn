#include<bits/stdc++.h>
using namespace std;

typedef struct LNode{
    int dat;
    LNode *next;
}*LinkList;
void creatLK(LinkList &L, int n)    //创建链表
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    LinkList q = (LinkList)malloc(sizeof(LNode));
    for(int i = 0; i < n; i++)
    {
        LinkList p = (LinkList)malloc(sizeof(LNode));
        cin>>p->dat;
        if(i == 0)
        {
            L->next = p;
            p ->next = NULL;
            q = p;
        }
        else
        {
            q->next = p;
            p ->next = NULL;
            q = p;
        }
    }
}

void TravelsingLK(LinkList L, int n)       //遍历链表
{
    cout<<n<<endl;
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p = L->next;
    while(p)
    {
        if(p->next != NULL)
            cout<<p->dat<<" ";
        else
        {
            cout<<p->dat;
        }
        p = p->next;
    }
    cout<<endl;
}

int FindLK(LinkList L, int i)       //查询链表第i个元素
{
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p = L -> next;
    bool flag = false;
    int re = -1;
    int j = 1;
    while(p && j < i)
    {
        p = p ->next;
        j++;
    }
    if(!p || j > i )
        return -1;
    else
        return p->dat;
    
}

void deleLK(LinkList L, int i)              //删去第i位元素
{
    LinkList p = L;
    int j = 0;
    while(p->next && j < i - 1)
    {
        p = p ->next;
        j++;
    }
    if(!(!(p->next) && j > i-1))
    {
        LinkList q = p->next;
        p->next = q->next;
        free(q);
    }
}

int deLK(LinkList lk, int n, int de)
{
    for(int i = 1 ; i <= n ; i++)
    {
        if(FindLK(lk, i) == de)
        {
            deleLK(lk, i);
            n--;
            i--;
        }
    }
    return n;
}

int main(void)
{
    int n;
    LinkList lk;
    while(cin>>n)
    {
        creatLK( lk , n);
        int de;
        cin>>de;
        TravelsingLK(lk, n);
        n = deLK(lk, n, de);
        TravelsingLK(lk, n);
    }
}

