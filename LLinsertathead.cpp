#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int info){
        data = info;
        next = nullptr;
    }
};
// int main(){
//     int n;
//     cin>>n;
    
//     int val;
//     cin>>val;
//      if(n==0) return 0;
//     node *start = new node(val);
//     node *temp = start;
//     for(int i=1; i<n; i++){
//         cin>>val;
//         temp->next = new node(val);
//         temp= temp->next;
//     }
//     temp = start;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp= temp->next;
//     }
//     cout<<"nullptr";
//     return 0;
   
// }

node *athead(node *head, int data){
   node *temp = new node(data);
   temp->next = head;
   return temp;
}
node *atanypos(node *head, int pos, int data){
    node *newnode = new node(data);
    if(pos==1){
        newnode->next = head;
        return newnode;
    }
    node *temp = head;
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp= temp->next;
    }
    if(temp==nullptr){
        cout<<"postion out of bounds";
        delete newnode;
        return head;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
int main(){
    cout<<"no error";  
}
