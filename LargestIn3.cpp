#include<bits/stdc++.h>
using namespace std;

class Largest
{
    private:
    int x, y, z;

    public:
    void input()
    {
        cout<< "Enter 1st number: " << endl;
        cin >> x;
        cout<< "Enter 2nd number: " << endl;
        cin >> y;
        cout<< "Enter 3rd number: " << endl;
        cin >> z;
    }

    void calc()
    {
        int r;
        r = ((x>y) && (x>z)?x:(y>x) && (y>z)?y:z);
        {
            cout << "The Largest number among: " << x << " " << y  <<" " << z << "is" <<" "<< r << endl;
        }
    }
};
int main()
{
    Largest l;
    l.input();
    l.calc();
    return 0;
}