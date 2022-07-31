//This program is to check whether the given number is prime or consecutive

#include <iostream>
using namespace std;
int main()
{
    int n, x, count=0;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    if(n==2 || n==1){
        cout<<"Nor a prime neither a consecutive number";
    }
    else{

        for (int i=1; i<=n/2; i++)
        {
            x = n%i;
            if(x==0)
            {
                count++;
            }
            else{
                continue;
            }

        }
        if(count>1){
            cout<<"the number is not prime";
        }
        else{
            cout<<"The number is prime";
        }
    }
    return 0;
}