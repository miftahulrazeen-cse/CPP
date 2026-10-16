#include <iostream>
using namespace std;
int main()
{
    cout << "INSERT CGPA";
    float cgpa;
    cin >> cgpa;

    cout << "INSERT CREDIT";
    int credit;
    cin >> credit;

    cout << "TYPE 1 IF FAILED ANY COURSE (OTHERWISE TYPE 0)";
    bool failed;
    cin >> failed;

    if(cgpa >= 0.00 && cgpa <= 4.00 && credit >= 12 && !failed)
    {
        if(cgpa >= 3.90)
        {
            cout << "100% WAIVER";
        }
        else if(cgpa >= 3.75 && cgpa < 3.90)
        {
            cout << "50% WEIVER";
        }
        else if(cgpa >= 3.50 && cgpa < 3.75)
        {
            cout << "25% WAIVER";
        }
        else 
        {
            cout << "NO WAIVER";
        }
    }
    else 
    {
        cout << "NO WAIVER";
    }



    return 0;
}