// WAP to check string anagram or not.
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char str1[] = "silent";
    char str2[] = "listen";
    int c1 = strlen(str1);
    int c2 = strlen(str2);
    int counter = 0;
    if(c1 != c2)
    {
        cout<<"Length is not equal";
    }
    else{
    for(int i=0; i<c1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            if(str1[i] == str2[j])
            {
                counter++;
            }
        }
    }
    if(counter == c1)
    {
        cout<<"Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
    }
}