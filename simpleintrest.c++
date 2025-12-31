#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double principal, rate, time, interest, total;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest (in %): ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

  
    interest = (principal * rate * time) / 100;
    total = principal + interest;

    cout << fixed << setprecision(2);
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}

