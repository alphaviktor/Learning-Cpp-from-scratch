//this code is to demostrate the use of switch case statements


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the a number between 1-5: ";
    cin>>num;

    switch(num)
    {
        case 1: cout<<"hola";
            break;
        
        case 2: cout<<"Buenas noches";
            break;

        case 3: cout<<"Bonjour";
            break;

        case 4: cout<<"Hey";
            break;

        case 5: cout<<"Guten morgen";
            break;
        
        default: cout<<"Im learning more";
            break;
    }
    return 0;
}