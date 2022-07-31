//Checking for plaindromes

#include <iostream>
using namespace std;
int main()
{
    char n;
    cout<<"Enter the lenght of the word you are willing to check: ";
    cin>>n;
     
    char arr[n+1];
    cin>>arr;

    bool check=true;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-i-1]){
            check=false;
            break;
        }
    }
    if(check==true)
        cout<<"Given word is a plaindrome";
    else
        cout<<"The word is not a palindrome";
    
     
}