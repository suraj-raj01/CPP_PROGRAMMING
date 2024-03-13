#include<iostream>
using namespace std;
int main()
{
/*
    char c[5];
    cout<<"Enter your name: \n";
    cin>>c;
    cout<<c<<endl;
    cout<<"size of name: "<<sizeof(c)<<endl;

    char d[] = "SURAJ";  // it end with /0
    cout<<d<<endl;
    cout<<"size of name: "<<sizeof(d)<<endl;
*/
    char e[10];
    cout<<"Enter your name: ";
    cin.getline (e,10);
    cout<<"name = "<<e<<endl;

    char f[] = "surajkumar";
    int size = sizeof(f)/sizeof(f[0]);
    cout<<f<<"\n";
    cout<<"length: "<<size;
}