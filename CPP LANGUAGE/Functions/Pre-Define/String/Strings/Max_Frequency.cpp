// Write a string to count the maximum frequency of any character.

// #include <iostream>
// using namespace std;
// #include <cstring>
// int main()
// {
//    char ch[20], p;
//    cout << "Enter your name: ";
//    cin >> ch;
//    int p = 0;
//    int len = strlen(ch);
//    for (int i = 0; i < len; ++i)
//    {
//       int c = 0;
//       for (int j = 0; j < len; ++j)
//       {
//          if (ch[i] == ch[j])
//          {
//             c++;
//          }
//       }
//       if (c > p)
//       {
//          p = c;
//          p = ch[i];
//       }
//    }
//    cout << "Maximum Frequency Character: " << p << "\n";
//    cout << "Letter came " << p << " Times";
// }

// #include <iostream>
// using namespace std;
// #include <cstring>
// int main()
// {
//    char ch[20], p;
//    cout << "Enter a string: ";
//    cin >> ch;
//    int p = 0;
//    int len = strlen(ch);
//    for (int i = 0; i < len; ++i)
//    {
//       int c = 0;
//       for (int j = 0; j < len; j++)
//       {
//          if (ch[i] == ch[j])
//          {
//             c++;
//          }
//       }
//       if (c > p)
//       {
//          p = c;
//          p = ch[i];
//       }
//    }
//    cout<<"Maximum Frequency: "<<p<<endl;
//    cout<<p<<" comes "<<p<<" Times"<<endl;
// }

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
char ch[10],p;
cout<<"Enter your name: ";
cin>>ch;
int t=0;
int len = strlen(ch);
for(int i=0; i<len; i++)
{
int c=0;
for(int j=0; j<len; j++)
{
if(ch[i]==ch[j])
{
c++;
}
}
if(t<c)
{
t = c;
p=ch[i];
}
}
cout<<p<<endl;
cout<<t<<" times";
}