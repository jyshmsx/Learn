#include<iostream>
using namespace std;

int t, a, b, minn, maxn, gy, yy;

int main(void)
{
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b;
		
		gy = 0, yy = 0; 
		
		if( a >= b)
		{
			maxn = a;
			minn = b;
		}
		else if (a < b)
		{
			maxn = b;
			minn = a;
		}
		
		for(int x = 1; x <= minn; x++)
		{
			if(minn % x == 0 && maxn % x ==  0)
			{
				gy = x;
			}
			if( gy == 0 && x == minn)
			{
				yy = 1;
			 }
			 else if( gy != 0 && x == minn){
				cout<<"Greatest common divisor is "<<gy<<endl;
			 }
		}
		
		
		if(yy != 1)
		for(int x = 1, y; ; x++)
		{
			y = x * minn;
			if( y % minn == 0 && y % maxn == 0)
			{
				cout<<"Lease common multiple is "<<y<<endl;
				break;
			}
		}
	}
 } 
