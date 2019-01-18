#include<iostream>
using namespace std;

int t, n;

int main(void)
{
	cin>>t;
	
	while(t--)
	{
		cin>>n; 
		for(int x = 0; x < n; n--)
		{
			for(int y = 2 * n - 1; y > 0; y--)           
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
	return 0;
}

