#include <iostream>
using namespace std;

int main()
{
    //this is for the year input 
    cout << "INPUT YEAR";
    int year;
    cin >> year;

    //this is the condition cheack by the given conditions in the problem
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not a Leap year";
    }

    return 0;
}