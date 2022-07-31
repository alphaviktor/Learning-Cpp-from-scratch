//This program is used to demonstrate the use of
//continue and break statements 

#include <iostream>
using namespace std;

int main()
{
    
    int pocketmoney = 3000;
    for(int date=1; date<=30; date++)
    {
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"today is "<<date<<" neha can go out"<<endl;
        pocketmoney -= 300;
    }

    return 0;
}