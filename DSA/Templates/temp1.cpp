// Function Based Task
#include<iostream>
using namespace std;
template <class x, class y>
y sum(x a, y b)
{
    return a+b;
}

int main()
{
    cout<<sum(2,56.8)<<endl;
    cout<<sum(2.55,56.35);
}

/*
Output:

58.8
58.9
*/