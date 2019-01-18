#include<iostream>
#include<stdio.h>
using namespace std;

char r[105];
int t;

int main(void)
{
	cin>>t;
	cin.get(); 
	while(t--)
	{
		gets(r);
		
		for(int x = 0; r[x] != '\0'; x++)
		{
			if('A' <= r[x] && r[x] <= 'Z' )
			{
				r[x] = 25 - r[x] + 'A' * 2;
			}
			else if('a' <= r[x] && r[x] <='z')
			{
				r[x] = 25 - r[x] + 'a' * 2;
			}
		}
		
		puts(r);
		
	}
}
