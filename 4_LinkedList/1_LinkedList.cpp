#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next = NULL;
    Node(){
    }
    Node(int value){
        this->val = value;
    }
    Node(int value, Node* next){
        this->val = value;
        this->next = next;
    }
};

void print(Node* head){
    Node* curr = head;
    while(curr){
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node();
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    print(head);
    return 0;
}