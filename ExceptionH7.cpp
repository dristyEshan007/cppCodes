#include<bits/stdc++.h>
using namespace std;

long int square(int i)
{
    return i*i;
}
long int sum(int n)
{
    long int s;
    s =0;
    for (int i = 1; i <n; i++)
    {
       s += square(i);
    }
    return s;
    
}
void display(int m)
{
    try
    {
        if(m<0)
        throw m;
        else
        cout << sum(m) << endl;
    }
    catch(int n)
    {
        cout << "Caught an exception. " << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a positive number: " << endl;
    cin >> n;
    display(n);
  return 0;
}