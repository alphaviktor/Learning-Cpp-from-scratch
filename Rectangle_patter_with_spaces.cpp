//this program is to print the rectangle pattern with space
//with rows and columns input by the user
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter the numbers of rows and colums you require";
    cin>>row>>col;

    for(int i=1 ; i<=row ; i++)
    {
        for(int m=1 ; m<=col ; m++)
        {
            if(i==1 || i==row || m==1 || m==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}