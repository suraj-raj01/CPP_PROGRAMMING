// WAP to generate the table of any number using function

#include<iostream>
using namespace std;

void table()
{
    int n;
    cout<<"Enter the number to generate their table: ";
    cin>>n;
    for(int i=1; i<=10; ++i)
    {
        cout<<n<<" * "<<i<<" : "<<n*i<<"\n";
    }
}

int main()
{
    table();
}
