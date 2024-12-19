#include<bits/stdc++.h>
using namespace std;

class Cube
{
    public:

    double Side;

    double volume()
    {
        return Side*Side*Side;
    }

    Cube(double side1)
    {
        cout << "Parameterized Constructor is called." << endl;
        Side = side1;
    }
    Cube()
    {
        cout << "Default Constructor is called." << endl;
    }
    ~Cube()
    {
        cout << "Destructing......" << Side <<endl;
    }
};

int main()
{
    Cube c1(3.46);
    Cube c2;
    cout << "The side of 1st cube is " << c1.Side << endl;
    cout << "The volume of 1st cube is: " << c1.volume() << endl;

    cout << "Enter the side of 2nd cube: " << endl;
    cin >> c2.Side;
    cout << "The volume of 2nd cube is: " << c2.volume() << endl;

    return 0;
}