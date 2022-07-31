//sum of first n natural numbers

#include <iostream>
using namespace std;
int sum(int n){
    
    int count = 0;
    for(int i=1; i<=n; i++){
        count += i;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"The sum of "<<n<<" natural integers is: "<<sum(n);
    return 0;
}

