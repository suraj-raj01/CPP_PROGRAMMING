// Right Shift Operator
#include<iostream>
using namespace std;
int main(){
    int n;
    n = 40>>3;
    /*
     40 / 2 = 20  --> 1st step
     20 / 2 = 10  --> 2nd step
     10 / 2 = 5   --> 3rd step
    */
    cout<<n;
    return 0;
}