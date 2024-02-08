// WAP to generate sqare between user input to 1.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    while(n>=1){
        cout<<n*n<<"\n";
        n--;
    }
    return 0;
}
/*
OUTPUT:-
Enter any number: 12
144
121
100
81 
64 
49 
36 
25 
16 
9  
4  
1 
*/