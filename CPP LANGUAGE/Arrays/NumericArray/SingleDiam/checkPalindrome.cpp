// WAP to chek the number is palindrome or not.

#include<iostream>
using namespace std;

bool palindrome(int n){
    int t = n;
    int result=0;
    while(n>0){
        int res = n%10;
        result = 10*result+res;
        n/=10;
    }
    return t==result;
}

int main(){
    int n;
    cout<<"Enter the number to check palindrome or not : ";
    cin>>n;
    if(palindrome(n)){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}

/*
Enter the number to check palindrome or not : 78987
Palindrome
*/