// Write a string to count the maximum frequency of any character.

#include<iostream>
using namespace std;
#include<cstring>
int main()
{
   char ch[20],t;
   cout<<"Enter your name: ";
   cin>>ch;
   int p = 0;
   int len = strlen(ch);
   for(int i=0; i<len; ++i)
   {
      int c = 0;
      for(int j=0; j<len; ++j)
      {
         if(ch[i]==ch[j])
         {
            c++;
         }
      }
      if(c>p)
      {
         p=c;
         t = ch[i];
      }
   }
   cout<<"Maximum Frequency Character: "<<t<<"\n";
   cout<<"Letter came "<<p<<" Times";
}