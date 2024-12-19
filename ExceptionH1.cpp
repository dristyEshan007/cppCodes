#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;


void powerFactor(float a)
{
    if(a > 1 || a < -1)
    {
        throw(a);
    }
    else
    {
        cout << "Voltage is Lagging from Current by " << acos(a)*180/pi << endl;
    }
}
int main()
{
    float a;
    try
    {
        cout <<"Enter power factor: "<< endl;
        cin >> a;
        powerFactor(a);
    }
    catch(float b)
    {
        cout << "Caught an exception \n";
    }

    return 0;
}