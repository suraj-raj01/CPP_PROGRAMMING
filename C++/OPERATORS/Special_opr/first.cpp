#include<iostream>
using namespace std;
int a = 20;
int b = 20;
int main(){
    
    int a = 30;
    cout<<a<<endl;
    cout<<::a<<endl;  //scope resolution operator is used to access any global variable and function
    b=5;
    cout<<::b;
    return 0;

}