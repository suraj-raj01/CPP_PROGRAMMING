// Write a program to find minmum number from stack.

#include<iostream>
using namespace std;
#include<vector>
#include<stack>
#include<algorithm>
int main()
{
    stack<int>stk;
    stack<int>t2;
    int n,d,min;
    min = INT32_MAX;
    cout<<min<<endl;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>d;
        stk.push(d);
    }

    cout<<"Output :\n";
    while(!stk.empty())
    {
        t2.push(stk.top());
        if(min>stk.top())
        {
            min = stk.top();
        }
        stk.pop();
    }
    cout<<"Min value: "<<min<<endl;
    cout<<"Reverse Order\n";
    while(!t2.empty())
    {
        cout<<t2.top()<<" ";
        t2.pop();
    }
}