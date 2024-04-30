/*
WAP to enter 4 digit number and print the sum of them
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the 4 digit number: ";
    cin>>n;
    if(n<1000 || n>10000)
    {
        cout<<"Please enter 4 digit number!!";
    }
    else{
        int first = n/1000;
        int second = n%1000/100;
        int third = n%1000%100/10;
        int last = n%1000%100%10;
        cout<<"first digit: "<<first<<endl;
        cout<<"second digit: "<<second<<endl;
        cout<<"third digit: "<<third<<endl;
        cout<<"last digit: "<<last<<endl;
        cout<<"Sum is: "<<first+second+third+last;
    }
}