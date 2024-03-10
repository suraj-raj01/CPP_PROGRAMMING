#include<iostream>
using namespace std;
int main(){
    int psw;
    int otp;
    cout<<"Enter your password: ";
    cin>>psw;
    if(psw==2024){
        cout<<"enter your otp: ";
        cin>>otp;
        if(otp==2023){
            cout<<"you are owner";
        }
        else{
            cout<<"you are fraud";
        }
    }
    else{
        cout<<"you are froud";
    }
}