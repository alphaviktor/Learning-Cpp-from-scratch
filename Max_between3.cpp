//This program would tell you the max between three numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b ,c;
    cout<<"enter the three number you are willing to compare: ";
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is the biggest";
        }
        else
        {
            cout<<"c is the greatest";
        }
    
    }
    else if (b>a)
    {
        if (b>c)
        {
            cout<<"b is the greatest";
        }
        else
        {
            cout<<"c is the greatest";
        }
    }
    else
    {
        cout<<"c is the greatest";
    }
    return 0;
}
