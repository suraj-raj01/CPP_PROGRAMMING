
#include<iostream>
using namespace std;
// return without parameter.
int sqr()
{
    int a=9;
    return a*a;
}

// return with parameter.
int sum(int a, int b)
{
    return a+b;
}

int main()
{
    cout<<sqr()<<"\n";
    cout<<sum(4,7);
    /*
     OR,
     int d = sum(4,7);
     cout<<d;
    */
}
