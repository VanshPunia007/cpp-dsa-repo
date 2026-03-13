#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
    Node(int val, Node* prev){
        this->val = val;
        this->prev = prev;
        this->next = nullptr;
    }
    Node(int val, Node* prev, Node* next){
        this->val = val;
        this->prev = prev;
        this->next = next;
    }
};

Node* createDLL(vector<int> &DLL, int n){
    if(n == 0)
        return nullptr;
    Node* head = new Node(DLL[0]);
    Node* tail = head;
    for(int i = 1; i < n; i++){
        tail->next= new Node(DLL[i], tail);
        tail = node;
    }
    return head;
}

void printDLL(Node *head){
    if(head == NULL)
        return;
    Node* curr = head;
    while(curr){
        if(curr->prev == nullptr)
            cout << "NULL";
        else
            cout << curr->prev->val;
        cout << "<-" << curr->val << "->";
        if(curr->next == nullptr)
            cout << "NULL";
        else
            cout << curr->next->val;
        cout << endl;
        curr = curr->next;
    }
}

int main() {
    vector<int> DLL;
    int n;
    cout << "Number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int node;
        cout << "n"<<i+1<<": ";
        cin >> node;
        DLL.push_back(node);
    }
    Node* head = createDLL(DLL, n);
    printDLL(head);
    return 0;
}