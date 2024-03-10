// '&' Operator.
#include<iostream>
using namespace std;
int main(){
    int a;
    a=15&11;
    /*
     15(decimal) --> 1111(binary)
     11(decimal) --> 1011(binary)
          1111
        + 1011
        ---------
          1011
        ---------
     1011(binary) --> 11(decimal)
     Rules of And(&) Operator
     1 & 1 = 1
     1 & 0 = 0
     0 & 0 = 0
     0 & 1 = 0

    */
    cout<<a;    // 11
    return 0;
}