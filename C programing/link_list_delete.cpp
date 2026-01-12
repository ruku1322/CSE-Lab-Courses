#include <bits/stdc++.h>
using namespace std;

 struct node{
 int value;
 struct node *link;
 };
 struct node *first = ( struct node*) malloc(sizeof(struct node));
 struct node *last = first;

 void insertList(int x) {
 if ( first->value==NULL){
   first-> value=x;
   first-> link = NULL;
 }
 else{
    struct node *newnode = ( struct node*) malloc(sizeof(struct node));
    newnode-> value= x;
      newnode-> link = NULL;
      last-> link =newnode;
      last= newnode;
 }
 }

 void printList(){
 struct node*temp= first;
 while(temp!=NULL){
    cout<<temp->value<<endl;
    temp=temp->link;
 }
 }
 void update(int x, int y){
 struct node*temp= first;
 while(temp!=NULL){

        if( temp->value==x){
    temp->value=y;
    break;

 }
 temp=temp->link;
 }
 }
 void deleteList(int x){
 struct node *temp = first;
struct node *previous = first;
while(temp!=NULL){
    if(temp-> value == x){
        previous->link = temp->link;
        last= previous;
    }
previous = temp;
    temp=temp->link;
 }
 }
 int main () {
  first->value = NULL;
  insertList(144);
  insertList(100);
  insertList(130);
  insertList(152);
  printList();
  update(144,20);
  printList();
  cout<<"update list is:"<<endl;
  deleteList(130);
  printList();
 }
