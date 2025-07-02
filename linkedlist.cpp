#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int info) {
        data = info;
        next = nullptr;
    }
};

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) return 0;


    Node* head = new Node(arr[0]);
    Node* temp = head;


    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }


    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
