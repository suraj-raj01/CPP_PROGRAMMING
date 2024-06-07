#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    // sorting functions
    string s = "5546565";
    sort(s.begin(), s.end()); // ascending
    cout<<"Ascending: "<<s<<endl;
    sort(s.begin(), s.end(), greater<int>());  // descending
    cout<<"Descending: "<<s<<endl;

    // StrinToInteger Conversion
    string s1 = "897845465";
    cout<<"String to Integer : "<<stoi(s1)+2<<endl;

    // clear() function
    string c = "joy";
    c.clear();      // removed data
    cout<<"Value is : "<<c<<endl;
    
    // compare function
    string str1 = "bhopal";
    string str2 = "BHOPAL";
    string str3 = "BHOPAL";
    string str4 = "Bhopal";
    cout<<str1.compare(str2)<<"\n";     // 1
    cout<<str3.compare(str4)<<"\n";     // -1

    // empty() function in string
    str1.clear();
    if(str1.empty())
    {
        cout<<"Empty!!"<<endl;
    }
    else{
        cout<<"Not Empty!!";
    }

    // erase() function
    string x = "cybrombhopal";
    cout<<x<<endl;
    cout<<x.erase(3,3)<<endl;

    // find() function in c++
    string y = "cybrombhopal";
    cout<<y.find("pal")<<endl;

    // insert() function in c++
    y.insert(2,"fun");
    cout<<y<<endl;

    // substr() -> substring function in c++
    string i = "cybrombhopal";
    cout<<i<<endl;
    cout<<i.substr(3,3);
}