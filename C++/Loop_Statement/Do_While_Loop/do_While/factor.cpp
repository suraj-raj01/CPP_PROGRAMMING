// WAP to print factor of a number.

#include<iostream>
using namespace std;
int main(){
    int n,factor=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factor of "<<n<<" = ";
    do{
        if(n%factor==0){
            cout<<factor<<"\t";
        }
        factor++;
    }while(factor<=n);
}

/*

OUTPUT:
Enter the number: 45
Factor of 45 = 1        3       5       9       15      45

*/