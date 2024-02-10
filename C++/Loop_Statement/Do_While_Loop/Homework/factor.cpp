// H/W --> Write a program to print factor of a number (do-while).

#include<iostream>
using namespace std;
int main(){
    int n,factor=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factor of  "<<n<<" : ";
    do{
        if(n%factor==0){
            cout<<factor<<"  ";
        }
        factor++;
    }while(factor<=n);
}


/*

OUTPUT:
Enter the number: 30
The factor of  30 : 1  2  3  5  6  10  15  30

*/