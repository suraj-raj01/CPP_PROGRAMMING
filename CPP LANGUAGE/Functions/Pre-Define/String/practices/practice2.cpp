
// input: "all the best"
// output: "all@the@best"
#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char ch[] = "all the best";
    int size = strlen(ch);
    for (int j = 0; j < size; j++)
    {
        if (ch[j] == ' ')
        {
            // cout<<"@";
            ch[j] = '@';
        }
        // else
        // {
        //     cout << ch[j];
        // }
    }
    cout<<ch;
}