#include <bits/stdc++.h>
using namespace std;
typedef int datatype;

struct SStack
{
    int top;
    datatype *a = NULL;
};

void createSS(SStack &st)
{
    st.top = 0;
    st.a = (int*)realloc(st.a, (st.top) * sizeof(int));
}
void pushSqStack(SStack &st, datatype x)
{
    st.a = (int*)realloc(st.a, (st.top + 1) * sizeof(int) );
    st.a[st.top] = x;
    st.top++;
}
bool popSqStack(SStack &st, datatype *y)
{
    if(st.top == 0)
    {
        cout<<"空栈"<<endl;
        return false;
    }
    else
    {
        st.top--;
        *y = st.a[st.top];
    }
    st.a = (int *)realloc(st.a, (st.top) * sizeof(int));
    return true;
}
void clearSqStack(SStack &st)
{
    st.top = 0;
    st.a = (int*)realloc(st.a, (st.top) * sizeof(int));
}
int main(void)
{
    SStack st;
    createSS(st);
    for(int i = 1; i < 5; i++)
    {
        pushSqStack(st, i);
    }
    pushSqStack(st, 100);
    int y;
    popSqStack(st, &y);
    cout<<"first: "<<y<<endl;
    popSqStack(st, &y);
    cout<<"second: "<<y<<endl;
    clearSqStack(st);
    system("pause");
}
