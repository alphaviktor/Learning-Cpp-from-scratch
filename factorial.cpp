#include <iostream>
using namespace std;

int factorial(int n){
    int a;
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    cout<<"Enter the number you want factorial of: ";
    cin>>n;

    cout<<"The factorial of "<< n <<" is "<<factorial(n);

    return 0;
}

// or
//int factorial(int n){
//    int factorial = 1;
//    for(int i=2; i<=n; i++){
//        factorial = factorial*i;
//}
//    return factorial;    
//}
 