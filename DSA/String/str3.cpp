// WAP to check wether the number is palindrome or not.
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string n;
    cout<<"Enter the number: ";
    cin>>n;
    string m = n;
    reverse(n.begin(),n.end());
    if(n==m)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}