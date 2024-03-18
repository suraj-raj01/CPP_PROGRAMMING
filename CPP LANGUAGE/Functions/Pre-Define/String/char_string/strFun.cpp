#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char a[20]= "bhopal";
    char b[20]= "cybrom";
    char c[20];

    cout<<a<<endl;
    cout<<b<<endl;

    cout<<"enter name: ";
    cin>>c;
    cout<<"name is: "<<c<<endl;

    // strlen() -> it is used to find the length of string.
    cout<<"String length: "<<strlen(c)<<endl;  // strlen() function.

    // find string length without inbuilt function
    char d[20];
    cout<<"Enter your name: ";
    cin>>d;
    int s = 0;
    for(int i=0; d[i] != '\0'; ++i)
    {
        s++;
    }
    cout<<"String Length: "<<s<<endl;

    // strupr() -> it is used to convert lower case to upper case.
    cout<<"bhopal -> "<<strupr(a)<<endl;

    // strlwr() -> it is used to convert uper case to lower case.
    char x[20] = "BHOPAL";
    cout<<"BHOPAL -> "<<strlwr(x)<<endl;

    // strcat() -> it is user to add or merge to string
    cout<<"Concatination of two string: "<<strcat(a,b)<<endl;
    // after concatination 'b' is copy into 'a'
    cout<<"after concat: "<<a<<endl;

    // strcpy() -> it is copy data from one to another or overrite.
    char u[20] = "apple";
    char v[20] = "banana";
    cout<<"copy data from v to u: "<<strcpy(u,v)<<endl;

    // strcmp() -> it is used to compare between two string.
    char pwd1[20];
    char pwd2[20];
    cout<<"Enter your password: ";
    cin>>pwd1;
    cout<<"Enter Re-enter password: ";
    cin>>pwd2;
    if(strcmp(pwd1,pwd2) == 0)
    {
        cout<<"Success!"<<endl;
    }
    else{
        cout<<"Invalid!!"<<endl;
    }

    // stricmp() -> it is used to compare between two string it ignore case sensitive.
    char password1[20];
    char password2[20];
    cout<<"Enter your password: ";
    cin>>password1;
    cout<<"Re-enter password: ";
    cin>>password2;
    if(stricmp(password1,password2) == 0)
    {
        cout<<"Success!"<<endl;
    }
    else{
        cout<<"Invalid!!"<<endl;
    }

    // strrev() -> it is used to reverse a string.
    cout<<"Reverse String: "<<strrev(c);
}