#include<iostream>
using namespace std ; 


struct node {
    int data; 
    struct node *next ; 
} ; 
struct node *head = NULL ; 
void insert(int n ) {
    node *temp = new node() ; 
    temp -> data = n ; 
    temp -> next = head ; 
    head = temp ; 

}
// concept delete

void deleteList(int n ){
    struct node *tem1 = head ;
    if (n == 1){
        head = tem1 -> next ; 
        delete tem1 ; 
        return ; 
    }
    for (int i = 0 ;i<n-2 ; i++){
        tem1 = tem1 -> next ; 
    }
     
    node *tem2  = tem1 -> next  ; 
    tem1 -> next = tem2-> next ; 
    delete tem2 ; 

  
    
}
void print() {
    struct node *temp = head ; 
    while (temp != NULL ){
        cout << temp -> data << " " ; 
        temp = temp -> next ; 
    }
    cout << "NULL\n" ; 
}
int main() {
    insert(1) ; 
    insert(2) ; 
    insert(3) ; 
    insert(4) ; 
    print() ; 
    deleteList(2) ; 
    print() ;

}