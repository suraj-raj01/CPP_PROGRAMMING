/*
Vector : Vectors are the same as dynamic arrays with the ability to resize themselves automatically 
when an element is inserted or deleted, with their storage being handled automatically by the container.

Vector Methos : 
1. size()
2. push_back()
3. pull_back()
4. front()
5. back()
6. at()
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    // size
    cout<<"Size : "<<vec.size()<<endl;
    // push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Size : "<<vec.size()<<endl;
    // pop_back
    vec.pop_back();
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"Size : "<<vec.size()<<endl;
    // front
    cout<<"Front : "<<vec.front()<<endl;
    // back
    cout<<"Back : "<<vec.back()<<endl;
    // at
    cout<<"value at 0th index : "<<vec.at(0)<<endl;
    cout<<"value at 1th index : "<<vec.at(1);
}