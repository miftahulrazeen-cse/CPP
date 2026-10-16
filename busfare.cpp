#include <iostream>
using namespace std;

int main()

{   
    cout << "INPUT AGE";
    int age;//define age here with int variable
    cin >> age;

    if(age >= 0)//condition for the validation of ages 
    {
        if(age < 5)//condition for the fare of valid ages 
        {
            cout << "0";
        }
        else if(age >= 5 && age <= 12)
        {
            cout << "20";
        }
        else if(age >= 13 && age <= 59)
        {
            cout << "40";
        }
        else 
        {
            cout << "30";
        }
    }
    else 
    {
        cout << "INVALID AGE";
    }

    return 0;
}
