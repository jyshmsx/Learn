#include <iostream>
using namespace std;
class Clock
{
protected:
    int Hour, Min, Sec;
public:
    Clock(int h, int m, int s);
    int getH();
    int getM();
    int getS();
    void setC(int h, int m, int s);
    void show() { cout << Hour << ":" << Min << ":" << Sec << endl; }
};
Clock::Clock(int h, int m, int s):Hour(h),Min(m),Sec(s)
{
    ;
}
int Clock::getH()
{
    return Hour;
}
int Clock::getM()
{
    return Min;
}
int Clock::getS()
{
    return Sec;
}
class SportsClock : public Clock{
    protected:
    int HeartRate;
    public:
    SportsClock(int x, int y, int z, int q):Clock(x,y,z),HeartRate(q)
    {
        ;
    }
    void show()
    {
        Clock::show();
        cout<<"HeartRate:"<<HeartRate<<endl;
    }
};
int main()
{
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    SportsClock sc(x, y, x, q);//妈的、这里脑残吧。。。xyx。。
    sc.show();
    return 0;
}