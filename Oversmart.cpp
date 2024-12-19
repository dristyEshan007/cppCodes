#include<bits/stdc++.h>
using namespace std;

void checkMarks(int Marks)
{
    if(Marks>100)
    {
        throw out_of_range("Oversmart! Kicked Out of university");
    }
}

int main()
{
    int Marks;

    cout << "Enter the marks of student: " << endl;
    cin >> Marks; 

    try
    {
        checkMarks(Marks);
        cout << "Mark accepted. Your Marks is: "  << Marks << "Student is safe."  << endl;
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;

}