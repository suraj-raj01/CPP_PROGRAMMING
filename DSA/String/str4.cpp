#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    // ToLower Case
    transform(s.begin(),s.end(),s.begin(),::tolower);
    // ToUpper Case
    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<s<<endl;
    for(int i=0; i<=s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        cout<<s[i];
    }
}