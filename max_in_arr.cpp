#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a=0;
    cout<<"Enter the size of the req array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        a = max(a, arr[i]);
    }
    cout<<a;
    return 0;
}