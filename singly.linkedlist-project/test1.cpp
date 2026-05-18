#include<iostream>
using namespace std; 

struct node {
    int data ; 
    node *next ; 
} ; 
void createOneNode(){
    struct node *newnode = NULL  ; 
    newnode = (struct node *)malloc(sizeof(struct node)) ; 
    newnode -> data = 10 ; 
    newnode -> next = NULL ; 
    cout << newnode-> data <<endl ; 
}
void create3Node() {
    struct node *one , *two , *three= NULL ;  
    one = (struct node *)malloc(sizeof(struct node )) ; 
    two= (struct node *)malloc(sizeof(struct node )) ; 
    three = (struct node *)malloc(sizeof(struct node )) ; 
    one -> data = 5 ; 
    one -> next = two  ; 
    two ->data =  9 ; 
    two -> next = three ; 
    three -> data = 12 ; 
    three -> next = NULL ; 

    cout << one -> data << two -> data<< three-> data<<"NULL"<<endl ; 



}

int main() {
    createOneNode() ; 
    create3Node() ; 

    
    return 0 ; 


}