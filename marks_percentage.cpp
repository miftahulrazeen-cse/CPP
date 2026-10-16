#include <iostream>
using namespace std;

int main()
{
    int obtained, total;
    cin >> obtained >> total;

    float percentage = (float)obtained / (float)total * 100;
    cout << "PERCENTAGE :" << percentage;

    return 0;
}