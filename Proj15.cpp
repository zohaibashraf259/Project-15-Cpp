#include <iostream>
using namespace std;

int main () {

    int marks;

    cout << "Enter your marks between (0 - 100): ";
    cin >> marks;

    if (marks < 0 || marks > 100 )
    {
        cout << "Invalid marks. Please enter a number between (0 - 100)" <<endl;
    }
    else if (marks >= 90)
    {
        cout << "Grade: A (Excellent)" <<endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: B (Good)" <<endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: C (Great)" <<endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: D (Nice)" <<endl;
    }
    else if (marks >= 50)
    {
        cout << "Grade: E (Need More Hardworking)" <<endl;
    }
    else
    {
        cout << "Grade: F (Fail)" <<endl;
    }
    

    return 0;
}
