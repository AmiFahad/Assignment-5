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

void stutter(node *& front)
{
    node *temp;
    temp=front;
    while(temp!=0)
    {
        node *A=new node;
        A->data=temp->data;
        A->next=temp->next;
        temp->next=A;
        temp=A;
        temp=temp->next;
    }
}
int main()
{
    node *front=0;
    create(front,1);
    insert_value(front,8);
    insert_value(front,19);
    insert_value(front,4);
    insert_value(front,17);
    stutter(front);
    display(front);

}



