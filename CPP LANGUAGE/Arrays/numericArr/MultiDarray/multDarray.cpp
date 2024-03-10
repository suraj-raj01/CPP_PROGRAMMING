// WAP to print multi dimensional array.

#include<iostream>
using namespace std;
int main()
{
    int table[3][3][4] = {1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1,2,3,4,5,6,7,8,9,8,7,4,5,6,3,2,1,2,3,4};
    for(int t=0; t<3; ++t)
    {
        for(int r=0; r<3; ++r)
        {
            for(int c=0; c<4; ++c)
            {
                cout<<table[t][r][c]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}
