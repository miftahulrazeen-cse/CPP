#include <iostream>
using namespace std;

int main()
{
    //here define the cgpa section
    cout << "ENTER THE CGPA";
    float cgpa;
    cin >> cgpa;

    //here define the credit section  
    cout << "ENTER THE CREDIT NUMBER";
    int credit;
    cin >> credit;

    //here define the course fail section
    cout << "IF FAILED A COURSE ENTER 1 (OTHERWISE ENTER 0)";
    bool failed;
    cin >> failed;

    //here the section for ideal condition given for waiver and checking
    if(cgpa >= 0.00 && cgpa <= 4.00 && credit >= 12 && !failed)
    {
        //this conditons are for the waiver percentage 
        if(cgpa >= 3.90)
        {
            cout << "100%";
        }
        else if(cgpa >= 3.75 && cgpa < 3.90)
        {
            cout << "50%";
        }
        else if(cgpa >= 3.50 && cgpa < 3.75)
        {
            cout << "25%";
        }
        else
        {
            cout << "No waiver";
        }
    }
    else 
    {
        cout << "No waiver";
    }

    return 0;
}