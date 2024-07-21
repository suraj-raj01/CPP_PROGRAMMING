// #include<iostream>
// using namespace std;
// #define n 5

// class stk{
//     public:int *arr;
//     int top;
//     stk(){
//         arr = new int[n];
//         top=-1;
//     }
//     void push(int a)
//     {
//         if(top==n-1)
//         {
//             cout<<"Overflow\n";
//             return;
//         }
//         top++;
//         arr[top] = a;
//     }
//     void pop()
//     {
//         if(top==-1)
//         {
//             cout<<"No element to delete\n";
//             return;
//         }
//         top--;
//     }
//     int tops()
//     {
//         if(top==-1)
//         {
//             cout<<"No element\n";
//             return -1;
//         }
//         return arr[top];
//     }
// };

// int main()
// {
//     stk st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     cout<<st.tops()<<"\n";
//     st.pop();
//     cout<<"top element is = "<<st.tops()<<endl;
//     while(st.top!=-1)
//     {
//         cout<<st.tops()<<endl;
//         st.pop();
//     }
//     delete []st.arr;
// }


#include<iostream>
using namespace std;
#define n 5
class stack{
    public:
    int *stk;
    int top;
    stack()
    {
        stk = new int[n];
        top=-1;
    }
    void push(int data)
    {
        if(top==n-1)
        {
            cout<<"Overflow Condition!!!";
            return;
        }
        else{
            top++;
            stk[top] = data;
        }
    }
    int pop()
    {
        int r=-1;
        if(top==-1)
        {
            cout<<"\nUnderflow Condition!!!";
        }
        else{
            r = stk[top];
            top--;
        }
        return r;
    }
    int peek()
    {
        int r = -1;
        if(top==-1)
        {
            cout<<"\nEmpty stack";
        }
        else{
            r = stk[top];
        }
        return r;
    }
    void show()
    {
        for(int i=n-1; i>=0; i--)
        {
            cout<<"\n"<<stk[i]<<"  ";
        }
    }
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.show();
    cout<<"\nPeek element is: "<<s.peek();
    cout<<"\nDeleted Element is: "<<s.pop();
    cout<<"\nDeleted Element is: "<<s.pop();
    cout<<"\nDeleted Element is: "<<s.pop();
    cout<<"\nPeek element is: "<<s.peek();
    cout<<"\nDeleted Element is: "<<s.pop();
    cout<<"\nDeleted Element is: "<<s.pop();
    cout<<"\nDeleted Element is: "<<s.pop();
}