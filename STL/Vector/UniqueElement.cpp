// WAF to print unique element from vector array.

#include<iostream>
using namespace std;
#include<vector>

int returnUniqueElement(vector<int>vec)
{
    int temp=0;
    for(int val1:vec){
        int c = 0;
        for(int val2:vec){
            if(val1==val2){
                c++;
            }
        }
        if(c==1){
            temp = val1;
        }
    }
    return temp;
}

int main()
{
    vector<int>vec = {1,2,6,5,4,2,1,6,8,4,5,2};
    int result = returnUniqueElement(vec);
    cout<<"Unique Element : "<<result;
}

// Unique Element : 8
// Time Complexity : O(n*2)  --> worst Case