#include <iostream>
using namespace std;

struct node{
    int num;
    node* next;
};

node* head = NULL;

void Recursion(node* temp){

    if(temp->next == NULL){
        head = temp;
        return;
    }

    Recursion(temp->next);

    node* q = temp->next;
    q->next = temp;
    temp->next = NULL;
}

void print(){
    node* temp = head;

    while(temp != NULL){
        cout << temp->num << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main(){

    // create nodes
    head = new node{1, NULL};
    head->next = new node{3, NULL};
    head->next->next = new node{5, NULL};
    head->next->next->next = new node{7, NULL};

    cout << "Before: ";
    print();

    Recursion(head);

    cout << "After : ";
    print();
}