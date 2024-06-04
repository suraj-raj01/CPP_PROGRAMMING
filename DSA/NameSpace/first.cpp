// Namespaces : Namespace provide the space where we can define or declare identifier 
// i.e. variable,  method, classes.

#include<iostream>
using namespace std;
namespace cybrom{
    int a = 100;
}
using namespace cybrom;
int main()
{
    int a = 200;
    cout<<cybrom::a;
}