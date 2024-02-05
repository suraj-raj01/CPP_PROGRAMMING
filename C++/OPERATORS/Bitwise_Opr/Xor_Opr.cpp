// XOR Operator.
#include<iostream>
using namespace std;
int main(){
    int n;
    n = 15^11;
    /*
     15(decimal) --> 1111(binary)
     11(decimal) --> 1011(binary)
          1111
        ^ 1011
        ---------
          0100
        ---------
     0100(binary) --> 4(decimal)
     
     Rules of XOR(^) Operator
     1 ^ 1 = 0
     1 ^ 0 = 1
     0 ^ 0 = 0
     0 ^ 1 = 1
     
    */
    cout<<n;
    return 0;
}