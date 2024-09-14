// WAP to print sum & product of all array element using vector array.

#include<iostream>
using namespace std;
#include<vector>
// sum of elements
int sumOfElement(vector<int>vec){
    int sum=0;
    for(int val:vec){
        sum+=val;
    }
    return sum;
}

// product of elements
int productOfElement(vector<int>vec){
    int product=1;
    for(int val:vec){
        product*=val;
    }
    return product;
}

int main()
{
    vector<int>vec = {1,2,3,4,5,6};
    cout<<"Sum of elements : "<<sumOfElement(vec)<<endl;
    cout<<"Product of elements : "<<productOfElement(vec);
}

/*
Sum of elements : 21
Product of elements : 720
*/