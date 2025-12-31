#include<iostream>
using namespace std;
int main()
{
		int num;
        cout<< "enter number to check it is positive,negative or zero:";
        cin>> num;
        if(num>0)
        {
            cout<<num<<" is positive number";
        }
        else if(num<0)
        {
            cout<<num<<" is negative number";
        }
        else if(num==0)
        {
            cout<<num<<" is zero number";
        }
}
