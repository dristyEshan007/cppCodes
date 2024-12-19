#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
    private:
    int length;
    int width;

    public:
     Rectangle(int , int);
     int AreaOfRect()
     {
        return (length*width);
     }
     int length1()
     {
        return length;
     }
     int width1()
     {
        return width;
     }
    
};

Rectangle::Rectangle(int x, int y)
{
    length = x;
    width = y;
}
int main()
{
    Rectangle r (2,2);

    cout<<"The Length of Rectangle :: "<<r.length1()<<"\n";
    cout<<"\nThe Breadth of Rectangle :: "<<r.width1()<<"\n";
    cout << "\nThe area of rectangle is :: " << r.AreaOfRect()<< endl;
    return 0;
}