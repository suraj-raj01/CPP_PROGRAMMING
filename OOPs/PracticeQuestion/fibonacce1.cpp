#include<iostream>
using namespace std;

class FIB
{
    int n=8;
    public:
    FIB()
        {
            if(n==0)
        {
            return;
        }
        if(n==1)
        {
            return;
        }
        int res = (n-1)+(n-2);
        cout<<res;
    }
};

int main()
{
   FIB f;
}