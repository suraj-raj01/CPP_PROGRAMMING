// WAP to print table of a number using go to statement.

#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout<<"Enter the number: ";
    cin>>n;
    prnt:
    cout<<a*n<<"\n";
    a++;
    if(a<=10){
        goto prnt;
    }
    return 0;
}