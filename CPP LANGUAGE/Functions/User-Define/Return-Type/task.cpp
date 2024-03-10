#include<iostream>
using namespace std;
int mp(int ltr)
{
    return 108*ltr;
}
int mh(int ltr)
{
    return 90*ltr;
}

int main()
{
    int p = mp(5);
    int profit = 20;
    cout<<p + profit*20<<"\n";
    cout<<mh(5)<<"\n";
}
