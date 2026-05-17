#include<iostream>
using namespace  std; 
struct node {
    int num ; 
    node *next ; 
}  ; 
struct node *head = NULL   ; 
void Insert(int data ,  int n ){
    struct node *temp = new node() ; 
    temp -> num = data  ; 
    temp -> next  = NULL ; 
    if (n == 1){
        temp -> next = head ; 
         head = temp ;
         return ; 
    }
   struct node *temp2 = head ;
   for (int i = 0 ;i< n-2 ; i++){
    temp2 = temp2  -> next  ; 
   }
   temp-> next = temp2-> next  ; 
   temp2 -> next = temp ; 


}
void print() {
    struct node *current = head; 
    while (current != NULL ){
        cout << current -> num <<"-" ; 
        current = current -> next  ; 
    }
    cout << "NULL" <<endl ; 
}
int main() {

    Insert(2,1) ; 
    Insert(3,2) ; 
    Insert(2,1) ; 
    Insert(5,4) ; 
    Insert(1,2) ; 
    print() ; 
    
}