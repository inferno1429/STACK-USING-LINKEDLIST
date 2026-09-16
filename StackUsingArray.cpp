#include <iostream>
using namespace std;
int stack[100];
int n;
int top = -1;
void push(int value){
    if(top==n-1){
        cout<<"Stack is FUll"<<endl;
    }
    else{
        top++;
        stack[top] = value;
        cout<<value<<" Sucessfully pushed"<<endl;
    }
    
}
void peek(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<stack[top]<<" is the top element"<<endl;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        top--;
        cout<<"Top ele Sucessfully popped"<<endl;
    }
}




int main() 
{ 
    cout<<"Enter the size of the stack: ";
    cin>>n;
   push(10);
   push(20);
   push(30);
   push(40);
   pop();
   peek();
     
}
