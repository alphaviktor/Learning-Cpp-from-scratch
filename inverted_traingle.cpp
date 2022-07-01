#include <iostream>
using namespace std;
int main()
{
    int n, i, m;
    cout<<"enter the number of rows you want";
    cin>>n;
    

    for( i=n; i>=1; i--)
    {
        for(m=1 ; m<=i ; m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}