/*
Count Occurrences of an Element:
Task: Write a program to count the number of times a specific character appears in a character array.
Sample Input: Array: ['a', 'b', 'a', 'c', 'a', 'd'], Character to count: 'a'
Sample Output: 'a' occurs 3 times
*/

// using character find number of occurrence in character array.
#include<iostream>
using namespace std;
int main()
{
    char array[] = {'a','b','a','c','a','d','b'};
    int size = sizeof(array)/sizeof(char);
    int t = 0;
    char temp = '0';
    for(int i=0; i<size; i++){
        int c=0;
        for(int j=0; j<size; j++){
            if(array[i]==array[j]){
                c++;
            }
        }
        if(t<c){
            t = c;
            temp = array[i];
        }
    }
    cout<<"[ "<<temp<<" occurs "<<t<<" times ]"<<endl;
}


// [ a occurs 3 times ]

// Using String find number of occurrrence in string.
/*
#include<iostream>
using namespace std;
#include<string>
int main()
{
    string str = "absafacvaa";
    int size = str.size();
    int t = 0;
    char temp = '0';
    for(int i=0; i<size; i++){
        int c = 0;
        for(int j=0; j<size; j++){
            if(str[i]==str[j]){
                c++;
            }
        }
        if(t<c){
            t = c;
            temp = str[i];
        }
    }
    cout<<temp<<" occurs "<<t<<" times";
}
*/