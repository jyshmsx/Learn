#include<iostream>
using namespace std;

int t, year, mon;

int main(void)
{
	cin>>t;
	
	while(t--)
	{
		cin>>year>>mon;
		switch(mon)
		{
			case 0:{
				cout<<"ERROR"<<endl;
				break;
			}
			case 1:{	
				cout<<"31"<<endl;
				break;
			}
			case 2:{
				if( year % 4 != 0)
					cout<<"28"<<endl;
				else if(year % 4 == 0) 
					cout<<"29"<<endl;
				break;
			}
			case 3:{
				cout<<"30"<<endl;
				break;
			}
			case 4:{
				cout<<"31"<<endl;
				break;
			}	
			case 5:{
				cout<<"31"<<endl;
				break;
			}
			case 6:{
				cout<<"30"<<endl; 
				break;
			}
			case 7:{
				cout<<"31"<<endl;
				break;
			}
			case 8:{
				cout<<"31"<<endl;
				break;
			case 9:{
				cout<<"30"<<endl;
				break;
			}
			case 10:{
				cout<<"31"<<endl;
				break;
			}
			case 11:{
				cout<<"30"<<endl;
				break;
			}
			case 12:{
				cout<<"31"<<endl;
				break;
			}
			default:
				cout<<"ERROR"<<endl;
			}
		}
	}
}
