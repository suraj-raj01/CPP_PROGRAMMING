#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact = 1;
    while(n>=1){
        fact=fact*n;
        n--;
    }
    cout<<fact;
}