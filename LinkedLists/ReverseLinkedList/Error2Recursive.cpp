#include<iostream>

using namespace std;

// O/p: 10 30 50 70 80 90 
// Time complexity: O(n)
// Space complexity: O(1)
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};

class  LL
{
public:
	Node *head;
	LL()
	{
		head=NULL;
	}

void ReverseLL(Node *head)
{
	if (head==NULL||head->next==NULL)
		return head;

	Node *rest=ReverseLL(head->next);
	head->next->next=head;
	head->next=NULL;

	return rest;
}

void display()
{
	Node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void push(int data)
{
	Node *t=new Node(data);
	t->next=head;
	head=t;
}
};

int main()
{
	LL l1;
	l1.push(10);
	l1.push(30);
	l1.push(50);
	l1.push(70);
	l1.push(80);
	l1.push(90);

	l1.display();
	cout<<endl;
	l1.ReverseLL(head);
	l1.display();

  return 0;
}