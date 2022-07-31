#include <iostream>
using namespace std;

int main()
{
    int row, i, j;
    cout<<"enter the number of rows u want: ";
    cin>>row;

    for(i=1; i<=row; i++)
    {
        for( j; j<=row; j++)
        {
            if(j<=row-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}