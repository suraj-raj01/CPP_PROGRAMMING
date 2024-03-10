// WAP to print table of a number.

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number: ";
    cin>>n;
    m=1;
    while(m<=10){
        cout<<n<<" * "<<m<<" = "<<n*m<<"\n";
        m++;
    }
    return 0;
}

/*

OUTPUT:

Enter the number: 10
10 * 1 = 10  
10 * 2 = 20  
10 * 3 = 30  
10 * 4 = 40  
10 * 5 = 50  
10 * 6 = 60  
10 * 7 = 70  
10 * 8 = 80  
10 * 9 = 90  
10 * 10 = 100

*/