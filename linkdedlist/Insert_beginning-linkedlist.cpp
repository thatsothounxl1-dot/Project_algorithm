// example this old data : 1 2 3 
// new data : 4
// output : 4 1 2 3 
#include <iostream>
using namespace std; 

struct node {
    int num; 
    struct node *next ; 
} ; 
struct node *head = NULL ; 
void Insert_beginning(int x ){
    struct node *temp = (struct node *)malloc(sizeof(struct node ))  ;  
    temp -> num =x ;
    temp -> next = head ; 
    head = temp ; 

} 
void print() {
    struct node *temp = head ; 
    while(temp != NULL ) {
        cout << temp -> num << " " ; 
        temp = temp -> next ; 
    }
    cout << "NULL"<<endl ; 

}
void Insert_end(int x )  {
    struct node *temp = (struct node *)malloc(sizeof(struct node )) ; 
    temp -> num = x ; 
    temp -> next = NULL ; 
    if ( head == NULL){
        
        return ; 
    }
    struct node *temp1 = head ; 
    while (temp1-> next != NULL ){
        temp1 = temp1 -> next ; 
    }
    temp1 -> next = temp ; 


}
void Reverse_linkedlist() {
    struct node *temp = head  ; 
    struct node *prev = NULL ; 
    struct node *rev = NULL ; 
    while (temp != NULL ){
        rev = temp -> next ; 
        temp -> next = prev ; 
        prev = temp ; 
        temp = rev ; 

    }
    head = prev ; 

}

int main() {

    int n ; 
    int  x; 
    // cout << "x" ; cin>>x ; 
    cout << "n" ; cin>>n ; 
    cout << "x" ; cin>>x ; 

    Insert_beginning(3) ;
    Insert_beginning(2) ;
    Insert_beginning(1) ;
    Insert_beginning(n) ;
    print() ;
    Insert_end(x) ;
    print() ;
    Reverse_linkedlist() ; 
    print() ;

    return 0;
}