//This program is to demostrate the use of do while loop by 
//printing n only if n is a natural number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    do
    {
        cout<<n;
        n = n-1;
    } while(n>0);
    
    return 0;
}