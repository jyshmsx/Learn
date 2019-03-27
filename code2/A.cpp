#include<bits/stdc++.h>
using namespace std;

class Rec{
    protected:
    int len, wei, s;
    public:
    Rec(int l = 1, int w = 1):len(l),wei(w),s(l * w)
    {
        
    }
    ~Rec()
    {
        cout<<len<<" "<<wei<<" "<<s<<endl;
    }
};


int main(){
    int len,wei;
    cin>>len>>wei;
    Rec r2(len,wei);
    Rec r1;
    return 0;
}