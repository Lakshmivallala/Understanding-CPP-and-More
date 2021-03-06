#include<iostream>
#include<bits/stdc++.h>

//https://www.geeksforgeeks.org/reverse-a-linked-list/ method 2
using namespace std;

//Time Complexity: O(n) 
// Space Complexity: O(1)
class Node
{
public:
	int data;
	Node *next;	
};

Node *head=NULL; 

void display()
{
Node *p = head;
while(p!=NULL)
{
	cout<<p->data<< " ";
	p=p->next;
}
 cout<<endl;
}


void ReverseLL()
{
	if ((head==NULL) || (head->next==NULL))
		return head;

	Node *rest=ReverseLL(head->next);
	head->next->next=head;
	head->next=NULL;

	return rest;
}


void InsertAtBegin(int val) 
{
	Node *temp=new Node();
	temp->data=val;
	temp->next=head;
	head=temp;

}

int main()
{
  	InsertAtBegin(1);
  	InsertAtBegin(2);
  	InsertAtBegin(5);
  	InsertAtBegin(9);
  	InsertAtBegin(11);
  	InsertAtBegin(13);
  	InsertAtBegin(3);
  	InsertAtBegin(7);
  	InsertAtBegin(6);

display();
ReverseLL();
display();

  return 0;
}