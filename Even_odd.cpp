//This program is to check weather the given number is even or odd


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number you want to check: ";
    cin>>num;
    if (num % 2 == 0)
    {
        cout<<"The number is even";
    }
    else
    {
        cout<<"The number is odd";
    }
    return 0;
}