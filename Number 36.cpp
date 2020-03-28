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
void insert(node *&front,int index,int value)
{
    node *temp,*temp1;
    int i=0;
    temp=front;
    node *new_node=new node;
    new_node->data=value;
    while(i<index-1)
    {
        temp=temp->next;
        temp1=temp->next;
        i++;
    }

        new_node->next=temp1->next;
        temp->next=new_node;
        delete temp1;


}
int main()
{
    node *front=0;
    create(front,8);
    insert_value(front,23);
    insert_value(front,19);
    insert_value(front,7);
    insert_value(front,102);

    insert(front,2,42);
    display(front);

}


