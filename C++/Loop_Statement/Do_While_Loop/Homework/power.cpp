// WAP to generate the power of a number.

#include<iostream>
using namespace std;
int main(){
    int base,exp,result=1;
    cout<<"Enter the base number: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>exp;
    do
    {
        result = result*base;
        exp--;
    }while(exp>=1);
    cout<<"Result is: "<<result;
}

/*

OUTPUT:

Enter the base number: 4
Enter the power: 3
Result is: 64

*/