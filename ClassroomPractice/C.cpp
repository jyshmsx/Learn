#include<bits/stdc++.h>
using namespace std;

class IsLeapYear{
protected:
    int year;
public:
    IsLeapYear(int y);
    bool isLeapYear();
};
IsLeapYear::IsLeapYear(int y):year(y){}
bool IsLeapYear::isLeapYear()
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
        return 1;
    else
        return 0;
}
class Date : public IsLeapYear{
    protected:
    int  month, day;
    public:
    Date(int y,int m,int d): IsLeapYear(y),month(m),day(d){}
    void show()
    {
        if(!IsLeapYear::isLeapYear() && month == 2 && day == 29)
        {
            cout<<"The date is error!"<<endl;
        }
        else{
            cout<<year<<"-"<<month<<"-"<<day<<endl;
        }
    }
};
int main(){
    int n,year,month,day;
    cin>>n;
    while(n--){
        cin>>year>>month>>day;
        Date date(year,month,day);
        date.show();
    }

}