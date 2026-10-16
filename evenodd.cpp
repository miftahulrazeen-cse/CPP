#include <iostream>
using namespace std;

int main ()

{   
    //this is for the input  decleration 
    cout << "INPUT A NUMBER";
    int n;
    cin >> n;

    if (n % 2 == 0)//contion for being an even number 
    {
        cout << "Even";
    }
    else 
    {
        cout << "Odd";
    }
    return 0;
}