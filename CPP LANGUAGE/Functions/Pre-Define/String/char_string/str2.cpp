#include<iostream>
using namespace std;
#include<cstring>   // pre-define function
int main()
{
    char c[20] = "surajkumarrajak";
    int size = sizeof(c)/sizeof(c[0]);
    cout<<size<<endl;
    cout<<strlen(c)<<endl;  // using inbuilt function
    // Without using inbuilt function
    char d[20];
    cout<<"Enter your name: ";
    cin>>d;
    int s = 0;
    for(int i=0; d[i] != '\0'; ++i)
    {
        s++;
    }
    cout<<"Length: "<<s;
}