#include <iostream>
using namespace std;

int main()
{
    //this is for taking the code 
    cout << "INSERT YOUR ID'S UNIQUE 5 DIGIT";
    int code;
    cin >> code;

    //this is for the condition which type ,ath you need to do
    if(code % 2 == 0)
    {
        cout << " YOU NEED TO DO EVEN NUMBER MATH";
    }
    else
    {
        cout << "YOU NEED TO DO ODD NUMBER MATH";
    }

    return 0;
}