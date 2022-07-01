//This program is to create a rectangle pattern with rows and columns input by the user


#include <iostream>
using namespace std;

int main()
{
    int i, row, clm, m;
    cout<<"Enter the number of rows you want";
    cin>>row;
    cout<<"Enter the number of columns you want";
    cin>>clm;

    for (i=1 ; i<=row ; i++)
    {
        for (m=1 ; m<=clm ; m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}