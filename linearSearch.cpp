#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key)
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the length of array: "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the number you want to search: ";
    cin>>key;

    cout<<linearSearch(arr, n, key);

    return 0;
}