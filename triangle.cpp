#include <iostream>
using namespace std;

int main()
{   
    //here define with an int for the sides off 3 sides by int 
    cout << "INPUT THE 3 SIDES";
    int a,b,c;
    cin >> a >> b >> c;

    //this is for an ideal triangle condition
    if(a + b > c && b + c > a && c + a > b)

        //this conditions are for the type of the triangle
        if(a == b && b == c)
        {
            cout << "Equilateral";
        }
        else if(a == b || b == c || a == c)
        {
            cout << "Isosceles";
        }
        else
        {
            cout << "Scalene";
        }
    else 
    {
        cout << "Not a triangle";
    }

    return 0;
}