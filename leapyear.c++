#include<iostream>
using namespace std;
int main()
{

        cout<<"enter year to check wether it is leap year or not";
       	int year;
       	cin>> year;
        if(year%4==0||year%400==0&&year%100!=0)
        {
            cout<<year<<" is leap year";
        }
        else
        {
            cout<<year<<" is not leap year";
        }
    
}

