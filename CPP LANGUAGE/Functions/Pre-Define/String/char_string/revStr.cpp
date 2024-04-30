// WAP to reverse a String without using any in-built functions

// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[20];
//     cout<<"Enter your String: ";
//     cin>>str;

//     //find size of string.
//     int size = 0;
//     for(int i=0; str[i] != '\0'; ++i)
//     {
//         size++;
//     }

//     // Now print the strings.
//     for(int i=size; i>=0; --i)
//     {
//         cout<<str[i];
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    char ch[10];
    cout<<"Enter the string: ";
    cin.getline(ch,10);

    int size=0;
    for(int i=0; ch[i]!='\0'; i++)
    {
        size++;
    }
    
    for(int i=size; i>=0; i--)
    {
        cout<<ch[i];
    }
}