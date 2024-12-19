#include<bits/stdc++.h>
using namespace std;

class Staff
{
    private:
    int ID;
    string Name;

    protected:
    int Age;

    public:
    void setDetails(int id,  string name, int age)
    {
        this -> ID = id;
        this -> Name = name;
        this -> Age = age;
    }

    virtual void displayDetails()
    {
        cout << "ID: " << ID << endl;
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

class Doctor : public Staff
{
    private:
    string Specialization;

    public:
    void setSpecialization(string specialization)
    {
        this -> Specialization = specialization;
    }
    void displayDetails() override
    {
        Staff::displayDetails();
        cout << "Specialization: " << Specialization << endl;
    }
    int calculateSalary(int hours, int hourlyRate)
    {
        return hours*hourlyRate;
    }
};

class Nurse : public Staff
{
    private:
    string Shift;

    public:
    void setShift(string shift)
    {
        this -> Shift = shift;
    }
    void displayDetails() override
    {
        Staff::displayDetails();
        cout << "Shift: " << Shift << endl;
    }
    int calculateSalaray(int days, int dailyRate)
    {
        return days*dailyRate;
    }
};

int main()
{
    Doctor d;
    d.setDetails(202, "Dr.Rajib Ahmed", 45);
    d.setSpecialization("Cardiology");

    Nurse n;
    n.setDetails(101, "Aisha", 30);
    n.setShift("Night");

    cout << "Doctor Details: " << endl;
    d.displayDetails();
    cout << "Salary: BDT- " << d.calculateSalary(40,5000) << endl;

    cout << "Nurse Details: " << endl;
    n.displayDetails();
    cout << "Salary: BDT- "<< n.calculateSalaray(20,200) << endl;
    return 0;
}