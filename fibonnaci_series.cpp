 #include <iostream>
 using namespace std;
 
 void fibonnaci(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
 }
 
 int main()
 {
    int n;
    cout<<"Enter the number of terms we need for fibonnaci: ";
    cin>>n;

    fibonnaci(n);
    return 0;
 }