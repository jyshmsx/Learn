#include<bits/stdc++.h>
using namespace std;
class Time
{
    protected:
    int hour, minute, second;
    public:
    Time(int h, int m , int s):hour(h),minute(m),second(s)
    {
        ;
    }
    void show()
    {
        cout<<hour<<":"<<minute<<":"<<second;
    }
};
class Date
{
    protected:
    int year, month, day;
    public:
    Date(int y, int m ,int d):year(y),month(m),day(d)
    {
        ;
    }
    void show()
    {
        cout<<year<<"-"<<month<<"-"<<day;
    }
};

class DateTime : public Date, public Time
{
    public:
    DateTime(int y, int mo ,int d, int h, int mi , int s):Date(y, mo, d), Time(h, mi, s)
    {
        ;
    }
    void show()
    {
        Date::show();
        cout<<" ";
        Time::show();
    }
};

int main(){
    int year,month,day;
    int hour,minute,second;

    cin>>year>>month>>day;
    Date d(year,month,day);
    d.show();
    cout<<endl;

    cin>>hour>>minute>>second;
    Time t(hour,minute,second);
    t.show();
    cout<<endl;

    cin>>year>>month>>day>>hour>>minute>>second;
    DateTime dt(year,month,day,hour,minute,second);
    dt.show();
    cout<<endl;
    // system("pause");
}