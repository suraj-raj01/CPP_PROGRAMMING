#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s1 = "welcome";
    string s2 = "cybrom";
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

    sort(s1.begin(),s1.end());  // ascending
    cout<<s1<<endl;

    sort(s1.begin(),s1.end(),greater<int>());   //decending
    cout<<s1<<endl;
}