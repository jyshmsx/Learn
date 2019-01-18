#include<iostream>
#include<string.h>
using namespace std;

int n , m, s;
int r[31];

int sumFib(int ,int);
int fib(int); 

int main(void)
{
	while(cin>>n>>m)
	{
		s = sumFib(n, m);
		
		cout<<s<<endl;
	}
}

int sumFib(int n, int m)
{
	int re = 0, x;
	for( x = 0; x <= m;x++)
	{
		r[x] = fib(x);
	}
	for(int x = n - 1; x < m; x++)
	{
		re += r[x]; 
	}
	return re;
}

int fib(int x)
{
	
	if( x == 1 || x == 0)
        return x;
    
    return	fib(x-1)+fib(x-2);
}


