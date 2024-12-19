#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
    int a;
    protected:
    int x;
    public:
    void get_a(int A)
    {
        this -> a = A;
    }
    void put_a()
    {
        cout << " a = " << a << endl;
    }
};

class B : public A
{
    private:
    int b;
    public:
    void get_b(int B)
    {
        this -> b = B;
    }
    void get_x(int X)
    {
        this -> x = X;
    }
    void put_b()
    {
       cout << " b = " << b << endl; 
    }
    void put_x()
    {
        cout << " x = " << x << endl;
    }
};
int main()
{
    B oB;
    oB.get_a(423);
    oB.get_b(43);
    oB.get_x(5);

    oB.put_a();
    oB.put_b();
    oB.put_x();
  return 0;
}