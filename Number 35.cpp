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

void rotate(node *& front)

{

	if(front==0)
    {
      return ;
    }


	node *temp,*current;
	temp =front ;
	front = front->next;
	current=front;
	temp->next=0;
	while(current->next)
	{
      current=current->next;
    }
    current->next=temp;
}



int main()
{
    node *front=0;
    create(front,8);
    insert_value(front,23);
    insert_value(front,19);
    insert_value(front,7);
    insert_value(front,45);
    insert_value(front,98);
    insert_value(front,102);
    insert_value(front,4);

    rotate(front);
    display(front);
}





