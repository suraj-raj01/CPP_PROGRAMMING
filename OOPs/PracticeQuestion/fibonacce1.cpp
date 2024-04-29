#include<iostream>
using namespace std;

class FIB
{
    public:
    FIB(int n)
        {
            if(n==0)
        {
            return;
        }
        if(n==1)
        {
            return;
        }
        int res = n+(n-1)+(n-2);
        cout<<res;
    }
};

int main()
{
   FIB f(10);
}