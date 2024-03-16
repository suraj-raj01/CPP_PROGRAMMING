// Write a string to count the maximum frequency of any character.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
   char ch[20] , count;
   cout<<"Enter your name: ";
   cin>>ch;
   int len = strlen(ch);
   for(int i=0; i<len; i++)
   {
      if(ch[i]==ch[i+1])
      {
        count = ch[i];
      }
   }
   cout<<"Maximum Frequency Character: "<<count;
}