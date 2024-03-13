#include<iostream>
using namespace std;
#include<cstring>   // pre-define function
int main()
{
    char c[20] = "surajkumarrajak";
    int size = sizeof(c)/sizeof(c[0]);
    cout<<size<<endl;
    cout<<strlen(c);
}