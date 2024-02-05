//Write a program to print simple intrest.

/*
#include<iostream>
using namespace std;
int main(){
    float Amount,intrest,month;
    cout<<"Enter the Amount: ";
    cin>>Amount;
    cout<<"Enter the intrest: ";
    cin>>intrest;
    cout<<"Enter the number of month: ";
    cin>>month;
    float SI = (Amount*intrest*month)/100;
    cout<<"Amount with intrest (SIMPLE INTREST): "<<SI;
    return 0;
}
*/

// Another way

#include<iostream>
using namespace std;
int main(){
    int amount, intrest, month;
    cout<<"Enter amount: ";
    cin>>amount;
    cout<<"Enter intrest: ";
    cin>>intrest;
    cout<<"Enter number of Month: ";
    cin>>month;
    cout<<"Simple Intrest: "<<(amount*intrest*month)/100;
    return 0;
}
