#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int p = 2;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<p<<"  ";
        }
        cout<<"\n";
    }
}

/*

Enter the number: 5
2  
2  2  
2  2  2  
2  2  2  2  
2  2  2  2  2  
2  2  2  2  2  2 

*/