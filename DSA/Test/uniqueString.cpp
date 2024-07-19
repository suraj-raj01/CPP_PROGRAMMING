/*
Q.1 Print unique strings in lexicography order with their frequency:
Example 1:
 Input: a=["pen","copy","pen","copy","eraser"]
Output:copy=2,eraser=1,pen=2

Input: a=["mon","tue","mon","sun"]
Output:mon=2,sun=1,tue=1
*/

#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s[] = {"pen","copy","pen","copy","eraser"};
    int l = 0;
    int count=0;
    for(int i=0; i<s->size(); i++)
    {
        for(int j=0; j<s->size(); j++)
        {
        if(s[i]==s[j])
        {
            cout<<s[i];
        }
        }
    }
    cout<<count;
}