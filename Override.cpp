#include<bits/stdc++.h>
using namespace std;

const int len = 20;
class Employee
{
    private:
    string FullName;
    long int IdNumber;
    int Age;
    float Salary;

    public:
    void enterData(void)
    {
        cout<<"Enter full name: " << endl;
        cin>> FullName;
        cout << "Enter ID:  " << endl;
        cin >> IdNumber;
        cout << "Enter Salary:  " << endl;
        cin >> Salary;
        cout << "Enter Age:  " << endl;
        cin >> Age;
    }
    void displayData(void)
    {
        cout << "Full name: " << FullName << endl;
        cout << "ID number: " << IdNumber << endl;
        cout << "Age: " << Age << endl;
        cout << "Salary:  " << Salary << endl;
    }
};
class Doctor : public Employee
{
    private:
    char desig[len];

    public:
    void enterData() 
    {
        Employee :: enterData( ) ;
        {
            cout << "enter designation of the doctor: " << endl; 
            cin >> desig;
        }
    }
    void displayData(void)
    {
        cout << "displaying particulars of doctor: " << endl;
        Employee :: displayData( );
        cout << "Designation: " << desig;
    }

};
int main()
{
    Doctor d;
    d.enterData();
    d.displayData();
  return 0;
}