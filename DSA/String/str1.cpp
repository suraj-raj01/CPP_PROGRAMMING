#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
    s="Bhopal";
    string j(5,'j');
    cout<<j<<endl;
    cout<<s<<endl;
    cout<<"Enter name: ";
    getline(cin,s);
    cout<<"name: "<<s<<endl;
    // length() function:
    cout<<s.length()<<endl;

    string s1 = "indore";
    string s2 = "bhopal";
    cout<<s1.append(s2)<<endl;
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<s1+s2<<endl; //concatenation
}