#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[20];
    cout << "Enter your name: ";
    cin >> str;
    cout<<"length: "<<strlen(str)<<endl;
    cout<<"Reverse String "<<strrev(str);
}
