#include<bits/stdc++.h>
using namespace std;


class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;

        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];

        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
            Stack st(5);
            st.push(10);
            st.push(30);
            st.push(25);
            st.push(65);
            cout<<"top element:- "<<st.peek()<<endl;
            st.pop();
            cout<<"top element:- "<<st.peek()<<endl;


















    // stack<int>s;

    // s.push(3);
    // s.push(5);
    // s.push(4);
    // s.push(9);
    // s.pop();

    // cout<<"The top element of the stack is:- " <<s.top()<<endl;
    
    // cout<<"The size of the stack is:- " <<s.size()<<endl;

}