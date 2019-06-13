#include<bits/stdc++.h>
using namespace std;

class Date{
    protected:
    int year, month, day;
    public:
    friend ostream& operator<<(ostream &D,const Date &obj)
    {
        D << obj.year <<"-"<<obj.month<<"-"<<obj.day;
        return D;
    }
    friend istream& operator>>(istream& D, Date &obj)
    {
        D >> obj.year >> obj.month >> obj.day;
        return D;
    }
    Date operator+(const int m)
    {
        Date obj;
        obj.year = this->year + m;
        obj.month = this->month;
        obj.day = this->day;
        return obj;
    }
};
int main(){
    int n,m;
    cin>>n;
    Date date;
    while(n--){
        cin>>date>>m;

        date=date+m;

        cout<<date<<endl;
    }
    return 0;
    
}