#include <iostream>
#include<stack>
#include<cstring>

using namespace std;

int getweight(char ch)
{
    switch(ch){
case '/':
    case '*':return 2;
    case '+':
    case '-':return 1;
    default:return 0;
    }
}
void infixtopostfix(char infix[],char postfix[],int size){

stack<char> s;
int weight;
int i =1;
int k = 0;
char ch;

while(i<size){

    ch=infix[i];
    if(ch=='(')
}
}

int main()
{

    return 0;
}
