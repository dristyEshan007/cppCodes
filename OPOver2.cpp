#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    void getData()
    {
        cout << "Enter the real part of the complex number: " << endl;
        cin >> real;
        cout << "Enter the imaginary part of the complex number: " << endl;
        cin >> img;
    }
    void operator+(Complex);
    void operator-(Complex);
};
void Complex ::operator+(Complex c1)
{
    Complex temp;
    temp.real = real + c1.real;
    temp.img = img + c1.img;
    if (temp.img >= 0)
    {
        cout << "Complex number after addition :: " << endl;
        cout << temp.real << "+" << temp.img << "i" << endl;
    }
    else
    {
        cout << "Complex number after addition :: " << endl;
        cout << temp.real << temp.img << "i" << endl;
    }
}
void Complex ::operator-(Complex c1)
{
    Complex temp;
    temp.real = real - c1.real;
    temp.img = img - c1.img;
    if (temp.img >= 0)
    {
        cout << "Complex number after substraction :: " << endl;
        cout << temp.real << "-" << temp.img << "i" << endl;
    }
    else
    {
        cout << "Complex number after addition :: " << endl;
        cout << temp.real << temp.img << "i" << endl;
    }
}

int main()
{
    Complex c1, c2;
    int n;
    do
    {
        cout << "1.Input data for complex no.: " << endl;
        cout << "2. Addition of complex no. " << endl;
        cout<<" 3. Subtraction of complex no. " << endl;
        cout<<" 4. Quit" << endl;
        cout<<" Enter your choice :: ";
        cin>>n;
                
        switch (n)
        {
        case 1:
           cout << endl << "Enter the data for 1st complex number: " << endl;
           c1.getData();
           cout << endl << "Enter the data for 2nd complex number: " << endl;
           c2.getData();
            break;

        case 2:
        c1+c2;
        break;

        case3:
        c1-c2;
        break;

       case 4:
        exit(1);
            break;
        }
    } while (n!=4);
    return 0;
}