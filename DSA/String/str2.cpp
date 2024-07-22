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

    // anagram
    string a = "abcd";
    string b = "dcba";
    int count=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int l=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[l]==b[i])
        {
            count++;
            l++;
        }
    }
    if(count==a.length())
    {
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
}