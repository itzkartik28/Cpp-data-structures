#include <iostream>
using namespace std;

#define SIZE 100

class stack {
int arr[SIZE];
int top;

public:
    stack(){
    top=-1;
    }

    void push(int value){
    if(top>=SIZE -1){
        cout<<"stack overflow"<<endl;
        return;
    }
    arr[++top]=value;
    cout<<value<<"pushed to stack."<<endl;
    }
    void pop(){
    if(top>=SIZE -1){
        cout<<"stack underflow"<<endl;
    }
    int peek(){
    if (top<0){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    return arr[top];
    }
    bool isempty(){
    return top<0;
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

   cout<<"top element is"<<s.peek()<<endl;

   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   s.pop();
    return 0;
}
