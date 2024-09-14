// WAP to print sum of all array element using vector array.

#include<iostream>
using namespace std;
#include<vector>
int sumOfElement(vector<int>vec){
    int sum=0;
    for(int val:vec){
        sum+=val;
    }
    return sum;
}
int main()
{
    vector<int>vec = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum of elements : "<<sumOfElement(vec);
}

// Sum of elements : 55