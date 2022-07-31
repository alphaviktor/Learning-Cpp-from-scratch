#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    int choice;
    cout<<"Enter both the strings without spaces";
    cin>>str1>>str2;

    cout<<"What action would you like to perform: \n1. adding two strings\n2. comparing two strings (1/2): ";
    cin>>choice;
    if (choice == 1){
        cout<<str1+str2<<endl;
    }
    else if (choice == 2)
    {
        cout<<str1.compare(str2)<<endl;
    }
    
    
    return 0;
}