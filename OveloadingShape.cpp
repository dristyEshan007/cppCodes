#include<bits/stdc++.h>
using namespace std;

class Measure
{
    public:
    void Cshape(int r);
    void Rshape(int l, int w);
    void Tshape(float t, int d, int e);
    void Sshape(long a);
    void Coshape(float c, long int g);
    void Spshape(double j);
    void Cyshape(float h, double f);
};
void Measure :: Cshape(int r)
{
    cout << "Area of Circle is: " << 3.1416*r*r << endl;
}
void Measure :: Rshape(int l, int w)
{
    cout << "Area of Rectangle is: " << l*w << endl;
}
void Measure :: Tshape(float t, int d , int e)
{
    cout << "Area of Triangle is: " << t*d*e << endl;
}
void Measure :: Sshape(long a)
{
    cout << "Area of Square is : " << a*a << endl;
}
void Measure :: Coshape(float c, long int g)
{
    cout << "Volume of Cone is: " << (1/3)*3.1416*c*c*g << endl;
}
void Measure :: Spshape(double j)
{
    cout << "Volume of Sphere is: " << (4/3)*3.1416*j*j*j << endl;
}
void Measure :: Cyshape(float h, double f)
{
    cout << "Volume of Cylinder is: " << 3.1416*f*f*h << endl;
}
int main()
{
    int r,l,w,d,e;
    float t , c, h;
    long a;
    double j,f;
    long int g;
    int Ch;

    Measure o;
    cout<<"\tCALCULATION OF AREA AND VOLUME"<< endl;
        cout<<"1. Area of circle. " << endl;
        cout<<"2. Area of rectangle." << endl;
        cout<<"3. Area of triangle"<< endl;
        cout<<"4. Area of square"<< endl;
        cout<<"5. Volume of the cone"<< endl;
        cout<<"6. Volume of the sphere"<< endl;
        cout<<"7. Volume of the cylinder" << endl;
        cout<<"\n\tEnter your choice " << endl;
        cin>>Ch;

        switch (Ch)
        {
        case 1:
        cout << "Enter the radius of Circle: " << endl;
        cin>> r ;
        o.Cshape(r);
            break;
        
        case 2:
        cout << "Enter the length and width of Rectangle: " << endl;
        cin>> l >> w ;
        o.Rshape(l,w);
            break;
        case 3:
        cout << "Enter the sides of Triangle: " << endl;
        cin>> d >> e;
        o.Tshape(0.5, d, e);
            break;
        case 4:
        cout << "Enter the side of Square: " << endl;
        cin>> a ;
        o.Sshape(a);
            break;
        case 5:
        cout << "Enter the sides of Cone: " << endl;
        cin>> c >> g ;
        o.Coshape(c, g);
            break;
        case 6:
        cout << "Enter the radius of Sphere: " << endl;
        cin>> j ;
        o.Spshape(j);
            break;
        case 7:
        cout << "Enter the sides of Cylinder: " << endl;
        cin>> h >> f ;
        o.Cyshape(h,f);
            break;
      default:
        cout<<"\nThe choice entered is a wrong choice";
        }
  return 0;
}