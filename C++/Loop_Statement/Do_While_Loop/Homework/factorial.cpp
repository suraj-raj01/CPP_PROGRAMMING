//WAP to print Factorial of a number.

#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    do
    {
        fact = fact*n;
        n--;
    }while(n>=1);
    cout<<"Factorial is: "<<fact;
}

/*

OUTPUT:

Enter the number: 5
Factorial is: 120

*/