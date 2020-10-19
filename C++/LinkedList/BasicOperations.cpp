#include<bits/stdc++.h>
using namespace std;
class node{
//MADE BY SHIVAM SINGLA (@shivam7374)

public:

	int data;
	node *next;

	node(int n)
	{
		data=n;
		next=NULL;
	}
};
void insertathead(node *&head,int n)
{
	node *temp=new node(n);
	temp->next=head;
	head=temp;
	return;
}
void insertattail(node* &head,int n)
{
	node*temp=new node(n);
	if(head==NULL)
	{
		head=temp;
		return;
	}
	node*temp1=head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
	temp->next=NULL;
	return;
}
void build(node *&head)
{
	int n;
	cin>>n;
	while(n!=-1)
	{
		insertattail(head,n);
		cin>>n;
	}
	return ;
}
node *midpoint(node *head)
{
	node * slow=head;
	node* fast=head;
	while(fast->next!=NULL && fast->next->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}

void print(node *head )
{
	while( (head->next)!=NULL )
	{
		cout<<head->data<<",";
		head=head->next;
	}
	cout<<head->data<<endl;
	return;
}
node* merge(node *head1,node *head2)
{
	node *c;
	if(head1==NULL)
	{
		return head2;
	}
	else if(head2==NULL)
	{
		return head1;
	}
	if( (head1->data) >= (head2->data) )
		{
			c=head2;
			c->next=merge(head1,head2->next);
		}
		else
		{
			c=head1;
			c->next=merge(head1->next,head2);
		}

	return c;
}
node * mergesort(node *head)
{
	//base case
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node *mid=midpoint(head);

	node *a=head;
	node *b=mid->next;
	mid->next=NULL;

	// seperate to linkedlists
	a=mergesort(a);
	b=mergesort(b);


	//merge a and b
	node* c=merge(a,b);
	return c;

}
node *recreverse(node *head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node *smallhead=recreverse(head->next);
	node *current=head;
	current->next->next=current;
	current->next=NULL;
	return smallhead;
}

int main()
{

	node *head=NULL;
	insertathead(head,5);
	insertathead(head,3);
	insertathead(head,2);
	insertathead(head,1);
	insertattail(head,7);
	insertattail(head,8);
	insertattail(head,9);
	// build(head);
	print(head);
	node *c=midpoint(head);
	cout<<endl<<c->data<<endl;
	// node * head1=NULL;
	// build(head1);
	// print(head1);
	cout<<endl<<endl;
	// node* mer=merge(head,head1);
	// print(mer);
	node * mergesor=mergesort(head);
	print(mergesor);
	print(recreverse(mergesor));
return 0;
}