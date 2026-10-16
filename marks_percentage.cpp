#include <iostream>
using namespace std;

int main()
{
    int obtained, total;
    cout << "INPUT OBTAINED MARK :";
    cin >> obtained;

    cout << "INPUT TOTAL MARK :";
    cin >> total;

    float percentage = (float)obtained / (float)total * 100;
    cout << "PERCENTAGE :" << percentage;

    return 0;
}