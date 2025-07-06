// A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. 
// This means that the last element added (pushed) to the stack is the first one removed (popped).

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int info){
        data=info;
        next = nullptr;
    }
};
class Stack{
    public:
    node *top;
    Stack(){
        top = nullptr;
    }
    void push(int val){
        node *newnode = new node(val);
        newnode->next = top;
        top = newnode;
    }
    void pop(){
        if(top==nullptr){
            cout<<"stack underflow or stack is empty";
            return;
        }
        node *temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        if(top==nullptr){
            cout<<"stack underflow or stack is empty";
            return -1;
        }
        return top->data;
    }
    bool isempty(){
        return top==nullptr;
    }
    void display(){
        node *temp = top;
        while(temp!= nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    ~Stack(){
        while(top!=nullptr){
            pop();
        }
    }
};

int main(){
    cout<<"no error";
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Stack contents: ";
    st.display();

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "After popping: ";
    st.display();
}