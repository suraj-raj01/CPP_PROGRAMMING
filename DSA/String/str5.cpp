#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1,s2;
    int k=0;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second number: ";
    cin>>s2;
    if(s1.length() != s2.length())
    {
        cout<<"not equal size of that string\n";
    }else{
    for(int i=0; i<s1.length(); i++)
    {
        for(int j=0; j<=s2.length(); j++)
        {
            if(s1[i]==s2[j])
            {
                k++;
            }
        }
    }
    }
    if(k==s1.length())
    {
        cout<<"anagram";
    }
    else{
        cout<<"not an anagram";
    }
}