#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B: virtual public A{};
class C: virtual public A{};
class D: public B , public C{};

int main()
{
    D d;
    d.display();
  return 0;
}