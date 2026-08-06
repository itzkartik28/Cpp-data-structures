#include <iostream>

using namespace std;

# define size 100

class stack{

private:
    int arr[size];
    int top;

public:
    stack(){
    top =-1;
    }

    void push(int value){
    if(top>=size -1){
        cout<<"stack overflow"<<endl;
        return;
    }
    arr[++top]=value;
    cout<<value<<"pushed to stack."<<endl;
    }
    void pop(){
    if(top<0){

        cout<<"stack underflow."<<endl;
        return;
    }
    cout<<arr[top--]<<"popped from stack."<<endl;
    }
    int peek(){
    if (top<0){
        cout<<"stack is empty."<<endl;
        return -1;
    }
    return arr[top];
    }
    bool isempty(){
    return top < 0;
    }
};

int main()
{
  stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  cout<<"top element is:"<<s.peek()<<endl;
  cout<<endl;

  s.pop();
  s.pop();
  s.pop();
  s.pop();
   s.pop();
    s.pop();
     s.pop();
    return 0;
}
