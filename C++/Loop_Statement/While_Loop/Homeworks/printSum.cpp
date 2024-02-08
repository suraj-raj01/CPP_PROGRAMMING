// WAP to print sum of n natural number using while loop.

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>=1){
        sum = sum + n;
        n--;
    }
    cout<<"sum is: "<<sum;
}