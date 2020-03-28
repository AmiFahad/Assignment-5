#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void create(node *&front,int value)
{
    node *A=new node;
    if(front==0)
    {
        A->data=value;
        A->next=0;
        front=A;
    }
}
void insert_value(node *&front,int value)
{
    node *A=new node;
    node *temp;
    temp=front;
    A->data=value;
    A->next=0;
    while(temp->next!=0)
    {
       temp=temp->next;
    }
    temp->next=A;

}
node display(node *&front)
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
void removeRange(node *&front,int min,int max)
{
	node *previous=0;
	node *current,*next;
	current=front;

	while(current!=NULL)
	{
		next =current->next;
		if((current->data<=max) &&(current->data>=min))
		{
			if(previous)
			{
				previous->next=current->next;
				delete current;
			}
			else
			{
				delete current;
				front = next;
			}
		}
		else
		{
			previous=current;
		}
		current=next;
	}
}


int main()
{
    node *front=0;
    create(front,4);
    insert_value(front,2);
    insert_value(front,1);
    insert_value(front,10);
    insert_value(front,15);
    insert_value(front,8);
    insert_value(front,7);
    insert_value(front,4);
    insert_value(front,20);
    insert_value(front,36);
    insert_value(front,-3);
    insert_value(front,40);
    insert_value(front,5);
    removeRange(front,4,20);
    display(front);







}
