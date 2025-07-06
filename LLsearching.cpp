#include <iostream>
using namespace std;
class node{
    int data;
    node *next;
    node(int info){
        data = info;
        next =nullptr;
    }
};

int searching(node *start, int ele){
    int count = 0;
    while(start!=nullptr){
        if(start->data == ele){
            return count;
            break;
        }
        count++;
        start = start->next;
    }
}
int main(){
cout<<"no error";
}