#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    // if all student will pass then result will be 1.
    vector<int>b{70,44,70,80,90,60,57,50};
    cout<<all_of(b.begin(),b.end(),[](int a){return a>40;})<<"\n";  // return 1

    // if any one student will fail then result will be 0.
    cout<<all_of(b.begin(),b.end(),[](int a){return a<40;})<<"\n";  // return 0

    cout<<any_of(b.begin(),b.end(),[](int a){return a>80;})<<"\n";
    cout<<none_of(b.begin(),b.end(),[](int a){return a>100;})<<"\n";
}
