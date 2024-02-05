// WAP to enter 3 digit number and print the sum of 3 numbers

#include<iostream>
using namespace std;
int main(){
    int n,f,m,l,t;
    cout<<"Enter the 3 digit number: ";
    cin>>n;
    f = n/100;
    t = n%100;
    l = t%10;
    m = t/10;
    cout<<n<<endl;
    cout<<"Sum of "<<n<<" is: "<<f+m+l<<endl;
    cout<<"sum is: "<<n%100%10+n%100/10+n/100;
    return 0;
}