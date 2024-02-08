// WAP to generate a power.
#include<iostream>
using namespace std;
int main(){
    int base,pow,result=1;
    cout<<"Enter the base number: ";
    cin>>base;
    cout<<"Enter the power number: ";
    cin>>pow;
    while(pow>=1){
       result=result*base;
       pow--;
    }
    cout<<result;
}

/*
suppose:
base = 5;
pow = 3;
result = 1 (given)
checking while condition
result = 1 * 5;  // condition true
result = 5 * 5;  // condition true
result = 25 *5;  // condition true
result = 125;    // condition false
then jump from while condition and print result
*/

/*
OUTPUT:-

Enter the base number: 5
Enter the power number: 3
125
*/