#include<bits/stdc++.h>
using namespace std;

class Factorial
{
    private:
    int n,n1,f=1;

    public:
    void input();
    void calc();
    void display();
};

void Factorial :: input()
    {
        cout << "Enter any number: " << endl;
        cin >> n;
    }
    void Factorial :: calc()
    {
       n1 = n;
       if(n==0 || n==1)
       {
         cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
       }
       else
       {
        while(n>0)
        {
            f = f*n;
            n--;
        }
       }
    }

    void Factorial :: display()
    {
        cout << "Factorial of " << n1 <<  "is " << f << endl;
    }
int main()
{
    Factorial f;
    f.input();
    f.calc();
    f.display();
    return 0;
}