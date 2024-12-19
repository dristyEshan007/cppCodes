#include<bits/stdc++.h>
using namespace std;

class Parent
{
    public:
    void call()
    {
        cout << "This is a Parent class" << endl;
    }
};

class Child1 : virtual public Parent
{
    public:
    void call()
    {
        cout << "This is Child 1 class" << endl;
    }
};

class Child2 : virtual public Parent
{
    public:
    void call()
    {
        cout << "This is Child 2 class" << endl;
    }
};

class Child3 : virtual public Parent
{
    public:
    void call()
    {
        cout << "This is Child 3 class" << endl;
    }
};
class Grandchild1: public Child1 , public Child2 , public Child3
{
    public:
    void call()
    {
        Parent::call();
        Child1::call();
        Child2::call();
        Child3::call();
        cout << "This is Grandchild 1 class" << endl;
    }
};
int main()
{
    Grandchild1 G;
    G.call();
    return 0;
}