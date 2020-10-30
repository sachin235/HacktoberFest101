#include <iostream>
using namespace std;
struct Node{
 int data;
 Node* next;
};
void push(Node*& head,int data)
{
 Node* temp=new Node;
 temp->data=data;
 temp->next=NULL;
 Node* ptr=head;
 if(head!=NULL)
 {
 while(ptr->next!=head)
 ptr=ptr->next;
 temp->next=head;
 ptr->next=temp;
 head=temp;
 }
 else
 {
 temp->next=temp;
 head=temp;
 }
}
int count(Node* head)
{
 Node* temp=head;
 int ans=0;
 if(head==NULL)
 return ans;
 do{
 temp=temp->next,ans++;
 }while(temp!=head);
 return ans;
}
int main()
{
 Node* head=NULL;
 push(head, 12);
 push(head, 2);
 push(head, 3);
 push(head, 4);
 push(head, 5);
 cout<<count(head);
}
