////Stack
#include<iostream>
using namespace std;

class Node{
public:    
	int data;
	Node *next;
};

class Stack{
public:
    Node* top;
    Stack(){
        top = NULL;
    }
    void display();
    int pop();
    void push(int val);
};
void Stack::push(int val){
    Node * node = new Node;
        node->data = val;
        node->next = top;
        top = node;
}
void Stack::display(){
    Node * ptr = top;
    if(ptr==NULL){
        cout<<"Stack is empty";
    }
    else{
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr = ptr->next;
        }
    }
}
int Stack::pop(){
    Node * ptr = top;
    int data = ptr->data;
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        top = top->next;
        delete ptr;
    }
    return data;
}

int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.display();
    cout<<"after popping -> "<<stack.pop()<<endl;
    stack.display();
    cout<<"after popping -> "<<stack.pop()<<endl;
    stack.display();
    return 0;
}
