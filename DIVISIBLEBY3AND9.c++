#include<iostream>
using namespace std;
int main()
{
        cout<<"enter number to check it is divisible by 3 and 9:";
        int num;
        cin>>num;
        if(num%3==0&&num%9==0)
        {
             cout<<num<<" is divisible by 3 and 9";
        }
        else
        {
            cout<<num<<" is not divisible by 3 and 9";
        }
    
}

