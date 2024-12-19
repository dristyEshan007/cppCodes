#include<bits/stdc++.h>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}
int addition(int a, int b, int c)
{
    return a + b + c;
}
float addition(float a, float b)
{
    return a + b;
}
int main()
{
    cout << addition(34, 35) << endl;
    cout << addition(54,984,356) << endl;
    cout << addition(443.34f, 46.45f) << endl;
  return 0;
}