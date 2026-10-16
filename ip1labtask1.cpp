 #include <iostream>
 using namespace std;

 int main()
{
    cout << "TYPE THE LENGTH OF THE TREASURE";
    float length;
    cin >> length;

    cout << "TYPE THE WIDTH THE TREASURE";
    float width;
    cin >> width;

    cout << "THE PERIMETER OF THE CHEST IS";
    float perimeter;
    cout << (length + width) * 2 << endl;

    cout << "PIRATE PETE WILL PAY";
    float cost;
    cout << ((length + width) * 2) * 4 << endl;

    return 0;
}
