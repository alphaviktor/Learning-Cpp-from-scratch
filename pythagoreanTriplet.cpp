//checking pythagorean triplet

#include <iostream>
using namespace std;

void pythagoreanTriplet(int p, int b, int h){
    
    if (p*p + b*b > h*h){
        cout<<"The above triplet is a pythagorean triplet";
    }
    else{
        cout<<"The above triplet is not a pythagorean triplet pls try again";
    }
}
int main()
{
    int base, hypo, perp;
    cout<<"Enter the length of perpendicular: ";
    cin>>perp;
    cout<<"Enter the length of base: ";
    cin>>base;
    cout<<"Enter the lenth of hypotenuese: ";
    cin>>hypo;

    pythagoreanTriplet(perp, base, hypo);
    return 0;
}