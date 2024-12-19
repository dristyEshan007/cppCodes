#include<bits/stdc++.h>
using namespace std;

class Function
{
        public:
                void Palin(int );
                void Palin(char c[]);
};
void Function :: Palin(int n)
{
    int n1, sum , a;
    n1=n;
    sum=0;
    do
    {
        sum = sum*10;
        a = n%10;
        sum = sum + a;

    } while (n>0);
    if(sum==n1)
    {
        cout << "It is a palindrome." << endl;
    } 
    else
    {
        cout << "It is not a palindrome."  << endl;
    }
}
void Function :: Palin(char c[])
{
    int l = strlen(c);
    char b[10];
    int i , j;
    for ( i = 0, j = 1; i < 1; i++,j--)
    {
        b[i]=c[j];
    }
    b[i] = ' ';
    if(strcmp(c,b)==0)
    {
        cout << "The entered text is a Plaindrome." << endl;
    }
    else
    {
        cout << "The entered text is not a Palindrome." << endl;
    }
    
}
int main()
{
    char c[10];
    int k, r ,v;
    Function P;

    do
    {
        cout<< "Palindrome: " << endl;
        cout << "1. For integer: " << endl;
        cout << "2.For Text: "<< endl;
        cout << "Enter your choice: " << endl;
        cin>> r;
        switch (r)
        {
        case 1:
            cout<< "Enter your Number: " << endl;
            cin >> k;
            P.Palin(k);
            break;
        case 2:
            cout<< "Enter your Text: " << endl;
            cin >> c;
            P.Palin(c);
            break;
        cout << "Do you want to continue? (1/0) " << endl;
        cin >> v;
        }
    } while (v==1);
    
  return 0;
}