// WAP to swapping of 2 number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 20;
//     cout << "Before swapping: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
    
//     //swapping
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "After swapping: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = " << b;

//     return 0;
// }

// =======another way==============

#include<iostream>
using namespace std;
int main(){
        cout<<"before swapping"<<endl;
    int a = 10, b = 20;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"after swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}













