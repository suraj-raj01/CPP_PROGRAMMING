#include<iostream>
using namespace std;
int main(){
    int pass,otps;
    cout<<"Create your password: ";
    cin>>pass;
    cout<<"Enter your otps: ";
    cin>>otps;
    int psw;
    int otp;
    cout<<"Enter your password: ";
    cin>>psw;
    if(psw==pass){
        cout<<"enter your otp: ";
        cin>>otp;
        if(otp==otps){
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