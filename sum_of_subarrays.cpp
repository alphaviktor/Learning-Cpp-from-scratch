//this program is to find the sum of all the subarrays of a certain array

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a=0;
    
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = sum+arr[j];
        }
    }
    cout<<sum;
    return 0;
    
}