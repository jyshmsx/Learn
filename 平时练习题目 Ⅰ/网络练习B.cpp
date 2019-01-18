#include<iostream>
using namespace std;

int t, r[3], z[3], rr;

int main(void)
{
	cin>>t;
	
	while(t--)
	{
		cin>>r[0]>>r[1]>>r[2];
		
		for(int n = 0; n < 3; n++)
		{
			z[n] = 1;
		}
		
		for(int x = 0 ; x < 3; x++)
		{
			for(int y = 1; y <= r[x] ; y++)
			{
				z[x] *= y;
			}
		}
		
		rr = z[0] + z[1] + z[2]; 
		
		cout<<rr<<endl;
		
	}
	
	return 0;
}
