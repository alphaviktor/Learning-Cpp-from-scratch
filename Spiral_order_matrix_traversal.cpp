/*
    This program is to demostrate the algorith behind spiral traversal of a 2D matrix
*/

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows of your desired matrix: "<<endl;
    cin>>n;
    cout<<"Enter the number of columns of your desired matrix: "<<endl;
    cin>>m;

    //declaring and inputing the array
    int arr[n][m];

    for (int i=0; i<n; i++){
        for (int j=i; j<m; j++){
            cin>>arr[n][m];
        }
    }

    //declaring crucial variables required for spiral traversal
    int rowStart=0, rowEnd=n-1, columnStart=0, columnEnd=m-1;

    

    while(rowStart<=rowEnd && columnStart<=columnEnd){

        //for rowStart
        for(int col=columnStart; col<=columnEnd; col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;

        //for column end
        for(int row=rowStart; row<=rowEnd; row++){
            cout<<arr[row][columnEnd]<<" ";
        }
        columnEnd--;

        //for row end
        for(int col=columnEnd; col>=columnStart; col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;

        //for column start
        for(int row=rowEnd; row>=rowStart; row--){
            cout<<arr[row][columnStart]<<" ";
        }
        columnStart++;
    }
    return 0;
}