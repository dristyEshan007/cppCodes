#include<bits/stdc++.h>
using namespace std;

class Dristy
{
    double a;
    double b;
    
    public:
    void input(double x, double y);
    void division();
};

void Dristy :: division()
{
    try
    {
        if(b==0)
        throw(b);
        else
        cout << "a/b=  " << a/b << endl;
    }
    catch(int)
    {
      cout << "An exception is caught" << endl;
    }
    
}

int main()
{
    double d;
    int e;

    Dristy ahmed;
    double e1, f1;
    cout << "Enter two numbers:  " <<endl;
    cin >> e >> f1;

    try
    {
        if(sizeof(d) != sizeof(e) || sizeof(d) != sizeof(f1))
        throw(f1);
        else
        {
            ahmed.input(e,f1);
            ahmed.division();
        }
    }
    catch(double)
    {
        cout << "Caught an exception. " << endl;
    }
    
  return 0;
}