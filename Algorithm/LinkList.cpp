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
void TravelsingLK(LinkList L)       //遍历链表
{
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p = L->next;
    while(p)
    {
        cout<<p->dat<<" ";
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
void addLK(LinkList L, int da)  //在链表末尾添加元素
{
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p = L;
    while(p -> next)
    {
        p = p->next;
    }
    LinkList q = (LinkList)malloc(sizeof(LNode));
    q->dat = da;
    q->next = NULL;
    p -> next = q;
}
void insertLK(LinkList L, int i, int da)    //在第i位插入da
{
    LinkList p = L; 
    int j = 0;
    while(p && j < i-1)
    {
        p = p ->next;
        j++;
    }
    if(!(!p || j > i-1))
    {
    LinkList s = (LinkList)malloc(sizeof(LNode));
    s -> dat = da;
    s -> next = p->next;
    p->next = s;
    }
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
LinkList mergeLK(LinkList La, LinkList Lb)  //将两个有序链表并为一个有序链表
{
    LinkList pa = La->next;
    LinkList pb = Lb -> next;
    LinkList pc = La;
    while(pa && pb)
    {
        if(pa ->dat <= pb->dat)
        {
            pc->next = pa;
            pc = pa;
            pa = pa ->next;
        }
        else
        {
            pc ->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }
    if(pa)
    {
        pc->next = pa;
    }
    if(pb)
    {
        pc->next = pb;
    }
    free(Lb);
    return La;
}
int main(void)
{
    LinkList lk, lk2;
    creatLK( lk , 10);
    creatLK(lk2, 10);
    TravelsingLK(lk);
    TravelsingLK(lk2);
    LinkList lk3 = mergeLK(lk, lk2);
    TravelsingLK(lk3);
    system("pause");
}

