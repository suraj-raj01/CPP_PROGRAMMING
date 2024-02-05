#include<iostream>
using namespace std;
int main(){
    int age,r;
    /* Variable = Condition ? OnTrue : OnFalse */
    cout<<"Enter your age: \n";
    cin>>age;
    // int x=10,y=-10;
    // r=age>=18?1:0;
    // r = age>=18?x:y;
    // cout<<r;
    // int result = age>=18?"eligible":"not Eligible"; // gives error
    cout<<(age>=18?"You can Vote":"You can not Vote");
}
/*
Ternary Operator:-
Ternary operator is a sortcut method of "if,else" in a ternary operator we use 
two symbols 1. "?" 2. ":" if the condition is true it will take ontrue value
which comes after "?" marks and in false condition it will take onfalse value 
which comes after ":".
*/