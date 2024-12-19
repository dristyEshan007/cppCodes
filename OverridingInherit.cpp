#include<bits/stdc++.h>
using namespace std;
const int len = 20;
class Employee
{
    private:
    char Full_name[len];
    int ID_number;
    int Age;
    float Salary;

    public:
    void enterData(void)
    {
        cout << "Enter Employee name: " << endl;
         cin >> Full_name ;
        cout << "Enter Employee Identity number: "<< endl; 
        cin >> ID_number ;
        cout << "Enter Employee Age: "<<endl;
          cin>> Age ;
        cout << "Enter Employee Salary: " <<endl;
         cin>> Salary ; 
    }

    void displayData()
    {
        cout << "Employee Name: " << Full_name ;
        cout << "Employee ID: " << ID_number ;
        cout << "Employee Age: " << Age ;
        cout << "Salary: " << Salary;
    }
};

class Engineer : public Employee
{
    private:
    char Design[len] ;

    public:
     void Enter_Data( )
     {
        Employee::enterData( ); // Member function er Overriding;
        cout << "What is the designation for the Engineer: "; cin >> Design;

     }
     void displayData(void)
     {
        cout << "Particular designation for Engineers" <<endl;
        Employee :: displayData( );  // Member function er Overriding;
        cout  << "Designation: " << endl;
     }
};
int main()
{
    Engineer e;

    e.enterData( );
    e.displayData( );
    return 0;
}