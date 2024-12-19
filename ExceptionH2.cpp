#include<bits/stdc++.h>
#define size 5
using namespace std;

void multipleCatch(int n)
{
    float v[size];
    try
    {
        if(n > size)
        {
            throw(n);
        }
        else if(n<=0)
        {
            throw(0.01);
        }
        else
        {
           cout << "Enter " << n << " elements one by one" << endl;
           for (int i = 0; i < n; i++)
           {
            cin >> v[i];
            cout <<"New contents of v" << n << endl;
            }

            for (int i = 0; i < n; i++)
            {
                cout << v[i] <<"  ";
            }
            
        }
    }
    catch(int m)
    {
        cout << " Array size mustbe less than or equal " << size << endl;
    }
    catch(double c)
    {
        cout << " Array Size mustbe positive except 0 " << endl;
    }
    
}
int main()
{
    int s;
    cout << "How many elements do you want to enter ? " << endl;
    cin >> s;
    multipleCatch(s);
    return 0;
}