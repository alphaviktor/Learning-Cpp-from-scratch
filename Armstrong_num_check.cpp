#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, digit, sum, x;
    cout<<"Enter the number you want to check: ";
    cin>>num;
    sum = 0;
    int originaln = num;
    while (num>0){
        digit = num%10;
        sum += digit*digit*digit;
        num = num/10;
    }
    if (sum==originaln){
        cout<<"The given number is an armstrong number"<<endl;
    }
    else{
        cout<<"The given number is not an armstrong number";
    }
    return 0;
}