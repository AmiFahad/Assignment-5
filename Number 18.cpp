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
node create_node(node *front, int a)

{
    node *temp,*temp1;
	temp=new node;
    temp->data=a;
    temp->next=0;
	if(front==0)

	{
		front=temp;
    }

	else
	{
        temp1=front;
		while(temp1->next!=0)
        {
          temp1=temp1->next;
        }
      temp1->next=temp;
	}
	return temp ;
}



void expand(node *&front,int num)

{
    node *A=0;
    node *temp,*previous;
    temp=front;
    int j=0;

	while(temp)
    {
        previous=temp;
        int j=previous->data/num;

		for(int i=0;i<num;i++)
        {
          create_node(&node,j)
		}
		temp=temp->next;
		delete previous;
    }
    front = A;

}


int main()
{
    node *front=0;
    create(front,12);
    insert_value(front,34);
    insert_value(front,-8);
    insert_value(front,3);
    insert_value(front,46);

    expand(front,2);







}






