#include<iostream>
using namespace std; 

struct node {
    int num ; 
    struct node *next ;
}   ; 
struct node *head = NULL ; 
void Traversal(int x ){
    node *dn = new node() ; 
    dn-> num = x ; 
    dn -> next = NULL ; 
    if (head == NULL ){
        head = dn ; 
        return ; 
    }
    node *count = head ; 
    while (count -> next != NULL ){
        count = count -> next ; 
    }
    count -> next = dn ; 

}
void Insert_Begin() {
     node *current = head ;
     while (current != NULL ){
        cout << current -> num << "->"  ; 
        current = current -> next ; 
     }
     cout << "NULL\n " ; 
 }
 int  CountNode() {
    node *temp = head ;
    int count = 0 ; 
    while (temp != NULL ){
        count++ ; 
        temp = temp -> next  ;
    }
    return count ; 

 }
 int sumofNode () {
    node *temp= head; 
    int sum  = 0 ; 
     while (temp != NULL ){
       sum += temp -> num ; 
       temp = temp -> next ; 

     }
     return sum ; 

 }
 void max(int max ){
     node *temp = head ; 
     while (temp != NULL ){
        if (temp -> num > max ){
            max = temp -> num ; 

        }else {
            temp = temp -> next ; 
        }

     }
     cout << "max : "<<max <<endl ; 
 }
 void min(int min){
    node *temp = head ;
    while (temp != NULL ){
        if (temp-> num<min ){
            min  = temp -> num ; 
        }else{
            temp = temp -> next ; 
        }

    }
    cout << "min : "<<min <<endl ; 

 }
int main() {
    Traversal(1) ; 
    Traversal(2) ; 
    Traversal(3) ; 
    Insert_Begin() ;
    int count = CountNode() ; 
    cout <<"count : " << count <<endl ;
    int sum = sumofNode() ; 
    cout << "sum: "<<sum <<endl ; 
    max(head -> num ) ; 
    min(head -> num ) ;

    


    return  0 ; 

}