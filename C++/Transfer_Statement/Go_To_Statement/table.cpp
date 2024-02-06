#include<iostream>
using namespace std;
int main(){
    // int a=1;
    // print:
    // cout<<a<<"\n";
    // a++;
    // if(a<=10){
    //     goto print;
    // }
    // return 0;
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