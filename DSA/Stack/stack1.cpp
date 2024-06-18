#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>stk;
    stk.push(60);
    stk.push(50);
    stk.push(80);
    stk.push(30);
    stk.push(90);
    stk.push(10);
    
    while(!stk.empty())
    {
        cout<<stk.top()<<"  ";
        stk.pop();
    }
}