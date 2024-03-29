// Input: "all the best"
// output: "allthebest"

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char ch[] = "all the best";
    int size = strlen(ch);

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == ' ')
        {
            continue;
        }
        else
        {
        cout<<ch[i];
        }
    }
}