//This program is to demostrate the use of for loop by additng the first n natural numbers


#include <iostream>
using namespace std;
int main()
{
    int num1, sum = 0;
    cout<<"Enter the value of n: ";
    cin>>num1;

    for (int counter = 0; counter <= num1; counter++ )
    {
        sum += counter;
    }
    cout<<sum;
    return 0;
}