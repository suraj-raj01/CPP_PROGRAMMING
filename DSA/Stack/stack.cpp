#include<iostream>
using namespace std;
#define n 5

class stk{
    public:int *arr;
    int top;
    stk(){
        arr = new int[n];
        top=-1;
    }
    void push(int a)
    {
        if(top==n-1)
        {
            cout<<"Overflow\n";
            return;
        }
        top++;
        arr[top] = a;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"No element to delete\n";
            return;
        }
        top--;
    }
    int tops()
    {
        if(top==-1)
        {
            cout<<"No element\n";
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    stk st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.tops()<<"\n";
    st.pop();
    cout<<"top element is = "<<st.tops()<<endl;
    while(st.top!=-1)
    {
        cout<<st.tops()<<endl;
        st.pop();
    }
    delete []st.arr;
}