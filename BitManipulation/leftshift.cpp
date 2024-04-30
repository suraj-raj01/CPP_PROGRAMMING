// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 9<<2;
//     cout<<a;
// }

#include<iostream>
using namespace std;
int main()
{
    int a = 12;
    int count=0;
    while(a!=0)
    {
        if(a&1)
        {
            count++;
        }
        a=a>>1;
    }
    cout<<count;
}