#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your desired array: ";
    cin>>n;

    int arr[n];

    for (int i=o; i<n; i++){
        cin>>arr[i];
    }    

    int counter=1;
    while(counter<n){
        for(int i=0; i<i-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}