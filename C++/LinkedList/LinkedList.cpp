#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// MADE BY SHIVAM SINGLA (@shivam7374)
class node{
public:
    int data;
    node* next;
    
  	node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

int length(node*head){
    
    int len=0;
    while(head!=NULL){
        head = head->next;
        len += 1;
    }
    return len;
}

void insertAtTail(node*&head,int data){
    
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node*&head,int data,int p){
    
    if(head==NULL||p==0){
        insertAtHead(head,data);
    }   
    else if(p>length(head)){
        insertAtTail(head,data);
    }
    else{
        //Insert in the middle 
        //Take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump += 1;
        }
        
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
        
    }
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return;
}

int main() {
    node*head=NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertInMiddle(head,5,2);
    insertAtTail(head,6);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
   	cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    deleteAtHead(head);
    cout<<"Length of Linked list is "<<length(head)<<endl;
    print(head);
    return 0;
}