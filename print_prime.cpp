#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int num)
{
    for (int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout<<"Enter the two required numbers"<<endl;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(isprime(i)==true){
            cout<<i<<endl;
        }
    }
}   