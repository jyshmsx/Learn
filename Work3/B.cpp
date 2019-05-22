#include <iostream>
using namespace std;

class Complex
{
protected:
    int Real;
    int Imag;

public:
    Complex() : Real(0), Imag(0) {}
    Complex(int r, int i) : Real(r), Imag(i) {}
    int getR() { return Real; }
    int getI() { return Imag; }
    void set(int r, int i)
    {
        Real = r;
        Imag = i;
    }
    friend ostream& operator<<(ostream &D, Complex &obj)
    {
        D << "(" << obj.getR() <<","<< obj.getI() <<")";
        return D;
    }
};

int main()
{
    int r, i;
    cin >> r >> i;
    Complex c(r, i);
    cout << c << endl;

    // system("pause");
    return 0;
}