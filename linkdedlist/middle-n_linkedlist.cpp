#include <iostream>
#include <stdlib.h>
using namespace std;
struct node {

    int num ;
    struct node *next ;
} ;
struct node *head = NULL;

void InsertBegin(int data ) {
    struct node *temp = NULL ;
    temp = (struct node *)malloc(sizeof(struct node)) ;
    temp -> num  =  data ;
    temp -> next= head ;
    head = temp  ;

}
void PrintInsert() {

     struct node *temp = head ;
     while (temp != NULL ){

         cout << temp -> num << "-"  ;
         temp = temp -> next ;
     }
     cout << "NULL\n" ;
}

int main() {

    int x ;
    cout<< "x : " ; cin>> x;
    InsertBegin(1) ;
    InsertBegin(2) ;
    InsertBegin(3) ;
    InsertBegin(x) ;
    PrintInsert() ;
}
