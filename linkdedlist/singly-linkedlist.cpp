#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void Insert(int val) {
    struct node *temp = new node();  
    temp->data = val;
    temp->next = head;
    head = temp;
}

void print() {
    struct node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";  
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int x;
    cout << "Enter x: ";
    cin >> x;
    Insert(x);
    print();
    return 0;
}