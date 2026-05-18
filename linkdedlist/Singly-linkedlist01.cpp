#include<iostream>
using  namespace std; 

struct node {
    int num ; 
    struct node *next ; 
} ;
struct node *head = NULL ; 
void Insert(int dt , int n ){
    node *temp1 = new node() ; 
    temp1-> num = dt ;
    temp1 -> next = NULL ; 
    if (n == 1){
        temp1-> next = head ; 
        head = temp1 ; 
        return ; 
    }
    node *temp2  = head ; 
    for (int i = 0 ;i<n-2 ; i++){
        temp2 = temp2 -> next ; 
    }
    temp1 -> next = temp2 -> next ;
    temp2-> next = temp1  ; 

}
void PrintInsert() {
    node *current  = head  ; 
    while (current != NULL ){
        cout << current -> num << "-" ; 
        current = current-> next ; 
    }
    cout << "NULL\n" ; 
}
void InsertBeginning(int nvlaue ){
    struct node *temp =  NULL ; 
    temp = (struct node *)malloc(sizeof(struct node )) ; 
    temp -> num =  nvlaue  ; 

    temp-> next = head ;
    head = temp ; 

}

int main() {

    Insert(2,1) ; 
    Insert(3,2) ; 
    Insert(5,1) ; 
    Insert(4,3) ; 
    InsertBeginning(2) ;
    PrintInsert() ; 
}