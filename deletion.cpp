#include <iostream>
using namespace std;
class node{
    public:
    node *next = nullptr;
    int data;
    node(int val){
        data = val;
        next = nullptr;
    }
};
node *delethead(node *start){
    if(start == nullptr){
        
        cout<<"already null";
        return nullptr;
    }
    node *temp = start;
    start = start->next;
    delete temp;
    return start;
}
node *deleteatanypos(node *start, int pos){
   node *temp =start;
    if(pos == 1){
        start = start->next;
        delete temp;
        return start;
    }
    temp = start;
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp = temp->next;
    }
    if(temp==nullptr || temp->next == nullptr){
        cout<<"position out of bounds"<<endl;
        return start;
    }
    node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    return start;
}
int main(){
    cout<<"no error";
}