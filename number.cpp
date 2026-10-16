#include <iostream>
using namespace std;

int main () 

{   
    cout << "INPUT MARKS";
    int marks;//this step is for taking input of the marks 
    cin >> marks;

    if (marks >= 0 && marks <= 100)//this condition here for identify the number is valid or not 
    {
        //this conditions are for grade show
        if (marks >=80 && marks <= 100)
        { 
            cout << "A";
        }
        else if (marks >=70 && marks <= 79)
        {
            cout << "B";
        }
        else if (marks >=60 && marks <=69)
        {
            cout << "c";
        }
        else if (marks >= 50 && marks <= 59)
        {
            cout << "D";
        }
        else 
        {
            cout << "F";
        }
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}