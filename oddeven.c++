#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number to check whether it is even or odd" << endl;
    cin >> num;

    if (num % 2 != 0)
    {
        cout << num << " is odd number";
    }
    else
    {
        cout << num << " is even number";
    }

    return 0;
}

