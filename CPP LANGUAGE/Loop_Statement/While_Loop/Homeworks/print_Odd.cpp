// WAP to print odd number from 1 to user input.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>=1){
        if(n % 2 != 0){
            cout<<n<<"\n";
        }
        n--;
    }
}

/*

OUTPUT:

Enter the number: 20
19
17
15
13
11
9
7
5
3
1

*/