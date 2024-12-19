#include <bits/stdc++.h>
class Base
{
public:
    void increment(int i)
    {
        printf("this is real:%d\n", i);
    }
};
class Parent : virtual public Base
{
public:
    void increment(int i)
    {
        i++;

        printf("this is main class & i=%d\n", i);
    }
};
class Child : virtual public Base
{
public:
    void increment(int i)
    {
        i *= 2;
        printf("this is child class and show double & i=%d\n", i);
    }
};

class GrandChild : public Child, public Parent
{
public:
    void decrement(int i)
    {

        Base::increment(i);
        Parent::increment(i);
        Child::increment(i);
        i--;
        printf("this is grand child class and show decrement & i=%d\n", i);
    }
};
int main()
{
    int i = 10;
    // Parent p;
    // p.increment(i);
    //  Child c;
    //  c.childdouble(i);
    //  c.increment(i);
    GrandChild g;
    g.decrement(i);
    return 0;
}