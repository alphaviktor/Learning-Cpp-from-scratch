//This program is to demostrate the use of while loop by printing n natural numbers

#include <iostream>
using namespace std;
int main()
{
    int n, val=1;
    cout<<"Enter the value of n: ";
    cin>>n;

    while (val<=n)
    {
        cout<<val;
        val += 1;
    }
    return 0;
}