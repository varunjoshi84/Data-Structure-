// #include <iostream>
// using namespace std;
// class node{
//     public:
//     node *next;
//     int data;
//     node(int info){
//         data = info;
//         next = nullptr;
//     }
// };
// node *sortll(node *head){
//     if(!head || !head->next) return nullptr;
//     bool swapped = true;
//     while(swapped){
//         swapped = false;
//         node *curr = head;
//         while(curr->next != nullptr){
//             if(curr->data > curr->next->data){
//                 int temp = curr->data;
//                 curr->data = curr->next->data;
//                 curr->next->data = temp;
//                 swapped = true;
//             }
//             curr = curr->next;
//         }
//     }
//     return head;

// }
// void *print(node *head){
//     while(head!=nullptr){
//         cout<<head->data<<"->";
//         head = head->next;
//     }
//     cout<<"nullptr";

// }
// int main(){
//     int n;
//     cin>>n;
//     int data;
//     cin>>data;
//     node *start= new node(data);
//     node *temp = start;
//     for(int i=1; i<n; i++){
//         cin>>data;
//         temp->next = new node(data);
//         temp= temp->next;
//     }
//     temp = start;
//     cout<<"original linked list";
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp= temp->next;
//     }
//    cout<<"\nlinked list after sorting"<<endl;
//    start = sortll(start);
//     print(start);

// }

#include <iostream>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node(int info){
        next =nullptr;
        data = info;
    }
};
node *atanypos(node *head, int data, int pos){
    node *newnode = new node(data);
    if(pos == 1){
        newnode->next = head;
        return newnode;
    }
    node *temp = head;
    for(int i=1; i<pos -1 && temp!= nullptr; i++){
        temp = temp->next;
    }
    if(temp==nullptr){
        cout<<"positon out of bound"<<endl;
        delete newnode;
        return temp;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
node *atstart(node *start, int data){
    node *temp = new node(data);
    temp->next = start;
    return temp;
}

// int main(){
//     int n;
//     cin>>n;
//     int data;
//     cin>>data;
//     node *start,*temp;
//     start = new node(data);
//     temp = start;
    
//     for(int i=1; i<n; i++){
//         cin>>data;
//         temp->next = new node(data);
//         temp= temp->next; 
//     }
//     temp =start;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"nullptr";
// }