//This program is to demonstrate the use of nested if else loop


#include <iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"Enter your savings amount: ";
    cin>>savings;
    if (savings>5000)
    {
        if (savings>10000)
        {
            cout<<"Road trip with Neha";
        } 
        else
        {
            cout<<"Shopping with Neha";
        }
    }
    else if (savings>2000)
    {
        cout<<"Rashmi";
    }
    else
    {
        cout<<"Friends";
    }
    return 0;
}
