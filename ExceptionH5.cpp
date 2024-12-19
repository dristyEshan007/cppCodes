#include<bits/stdc++.h>
using namespace std;

void Division(int a, int b)
{
    try
    {
        if(b==0)
        throw(b);

        else
        cout << "a/b =  " << float(a/b) << endl;
    }
    catch(int)
    {
        cout << "Caught an exception as first thrwoing." << endl;
    }
    
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;

    try
    {
        Division(a,b);
    }
    catch(int)
    {
       cout<< "Caught an exception as re-throwing "<< endl;
    }
    
  return 0;
}